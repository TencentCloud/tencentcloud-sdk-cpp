/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CREATEPROGRAMREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CREATEPROGRAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/ProgramItem.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * CreateProgram请求参数结构体
                */
                class CreateProgramRequest : public AbstractModel
                {
                public:
                    CreateProgramRequest();
                    ~CreateProgramRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据集名称
                     * @return ProgramName 数据集名称
                     * 
                     */
                    std::string GetProgramName() const;

                    /**
                     * 设置数据集名称
                     * @param _programName 数据集名称
                     * 
                     */
                    void SetProgramName(const std::string& _programName);

                    /**
                     * 判断参数 ProgramName 是否已赋值
                     * @return ProgramName 是否已赋值
                     * 
                     */
                    bool ProgramNameHasBeenSet() const;

                    /**
                     * 获取数据集描述
                     * @return ProgramDesc 数据集描述
                     * 
                     */
                    std::string GetProgramDesc() const;

                    /**
                     * 设置数据集描述
                     * @param _programDesc 数据集描述
                     * 
                     */
                    void SetProgramDesc(const std::string& _programDesc);

                    /**
                     * 判断参数 ProgramDesc 是否已赋值
                     * @return ProgramDesc 是否已赋值
                     * 
                     */
                    bool ProgramDescHasBeenSet() const;

                    /**
                     * 获取数据项列表，传入null或空数组时不新增
                     * @return ProgramItemList 数据项列表，传入null或空数组时不新增
                     * 
                     */
                    std::vector<ProgramItem> GetProgramItemList() const;

                    /**
                     * 设置数据项列表，传入null或空数组时不新增
                     * @param _programItemList 数据项列表，传入null或空数组时不新增
                     * 
                     */
                    void SetProgramItemList(const std::vector<ProgramItem>& _programItemList);

                    /**
                     * 判断参数 ProgramItemList 是否已赋值
                     * @return ProgramItemList 是否已赋值
                     * 
                     */
                    bool ProgramItemListHasBeenSet() const;

                private:

                    /**
                     * 数据集名称
                     */
                    std::string m_programName;
                    bool m_programNameHasBeenSet;

                    /**
                     * 数据集描述
                     */
                    std::string m_programDesc;
                    bool m_programDescHasBeenSet;

                    /**
                     * 数据项列表，传入null或空数组时不新增
                     */
                    std::vector<ProgramItem> m_programItemList;
                    bool m_programItemListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATEPROGRAMREQUEST_H_
