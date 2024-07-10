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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYPROGRAMREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYPROGRAMREQUEST_H_

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
                * ModifyProgram请求参数结构体
                */
                class ModifyProgramRequest : public AbstractModel
                {
                public:
                    ModifyProgramRequest();
                    ~ModifyProgramRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据集ID
                     * @return ProgramId 数据集ID
                     * 
                     */
                    std::string GetProgramId() const;

                    /**
                     * 设置数据集ID
                     * @param _programId 数据集ID
                     * 
                     */
                    void SetProgramId(const std::string& _programId);

                    /**
                     * 判断参数 ProgramId 是否已赋值
                     * @return ProgramId 是否已赋值
                     * 
                     */
                    bool ProgramIdHasBeenSet() const;

                    /**
                     * 获取数据集名称，不传入时不更新
                     * @return ProgramName 数据集名称，不传入时不更新
                     * 
                     */
                    std::string GetProgramName() const;

                    /**
                     * 设置数据集名称，不传入时不更新
                     * @param _programName 数据集名称，不传入时不更新
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
                     * 获取数据集描述，不传入时不更新
                     * @return ProgramDesc 数据集描述，不传入时不更新
                     * 
                     */
                    std::string GetProgramDesc() const;

                    /**
                     * 设置数据集描述，不传入时不更新
                     * @param _programDesc 数据集描述，不传入时不更新
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
                     * 获取数据项列表，传入null不更新，传入空数组全量删除
                     * @return ProgramItemList 数据项列表，传入null不更新，传入空数组全量删除
                     * 
                     */
                    std::vector<ProgramItem> GetProgramItemList() const;

                    /**
                     * 设置数据项列表，传入null不更新，传入空数组全量删除
                     * @param _programItemList 数据项列表，传入null不更新，传入空数组全量删除
                     * 
                     */
                    void SetProgramItemList(const std::vector<ProgramItem>& _programItemList);

                    /**
                     * 判断参数 ProgramItemList 是否已赋值
                     * @return ProgramItemList 是否已赋值
                     * 
                     */
                    bool ProgramItemListHasBeenSet() const;

                    /**
                     * 获取ProgramItemList是否是空数组
                     * @return EmptyProgramItemList ProgramItemList是否是空数组
                     * 
                     */
                    bool GetEmptyProgramItemList() const;

                    /**
                     * 设置ProgramItemList是否是空数组
                     * @param _emptyProgramItemList ProgramItemList是否是空数组
                     * 
                     */
                    void SetEmptyProgramItemList(const bool& _emptyProgramItemList);

                    /**
                     * 判断参数 EmptyProgramItemList 是否已赋值
                     * @return EmptyProgramItemList 是否已赋值
                     * 
                     */
                    bool EmptyProgramItemListHasBeenSet() const;

                private:

                    /**
                     * 数据集ID
                     */
                    std::string m_programId;
                    bool m_programIdHasBeenSet;

                    /**
                     * 数据集名称，不传入时不更新
                     */
                    std::string m_programName;
                    bool m_programNameHasBeenSet;

                    /**
                     * 数据集描述，不传入时不更新
                     */
                    std::string m_programDesc;
                    bool m_programDescHasBeenSet;

                    /**
                     * 数据项列表，传入null不更新，传入空数组全量删除
                     */
                    std::vector<ProgramItem> m_programItemList;
                    bool m_programItemListHasBeenSet;

                    /**
                     * ProgramItemList是否是空数组
                     */
                    bool m_emptyProgramItemList;
                    bool m_emptyProgramItemListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYPROGRAMREQUEST_H_
