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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_CREATEPROGRAMSTATEREQUEST_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_CREATEPROGRAMSTATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ump/v20200918/model/ProgramStateItem.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * CreateProgramState请求参数结构体
                */
                class CreateProgramStateRequest : public AbstractModel
                {
                public:
                    CreateProgramStateRequest();
                    ~CreateProgramStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集团编码
                     * @return GroupCode 集团编码
                     * 
                     */
                    std::string GetGroupCode() const;

                    /**
                     * 设置集团编码
                     * @param _groupCode 集团编码
                     * 
                     */
                    void SetGroupCode(const std::string& _groupCode);

                    /**
                     * 判断参数 GroupCode 是否已赋值
                     * @return GroupCode 是否已赋值
                     * 
                     */
                    bool GroupCodeHasBeenSet() const;

                    /**
                     * 获取进程监控信息列表
                     * @return ProgramStateItems 进程监控信息列表
                     * 
                     */
                    std::vector<ProgramStateItem> GetProgramStateItems() const;

                    /**
                     * 设置进程监控信息列表
                     * @param _programStateItems 进程监控信息列表
                     * 
                     */
                    void SetProgramStateItems(const std::vector<ProgramStateItem>& _programStateItems);

                    /**
                     * 判断参数 ProgramStateItems 是否已赋值
                     * @return ProgramStateItems 是否已赋值
                     * 
                     */
                    bool ProgramStateItemsHasBeenSet() const;

                    /**
                     * 获取商场ID
                     * @return MallId 商场ID
                     * 
                     */
                    uint64_t GetMallId() const;

                    /**
                     * 设置商场ID
                     * @param _mallId 商场ID
                     * 
                     */
                    void SetMallId(const uint64_t& _mallId);

                    /**
                     * 判断参数 MallId 是否已赋值
                     * @return MallId 是否已赋值
                     * 
                     */
                    bool MallIdHasBeenSet() const;

                private:

                    /**
                     * 集团编码
                     */
                    std::string m_groupCode;
                    bool m_groupCodeHasBeenSet;

                    /**
                     * 进程监控信息列表
                     */
                    std::vector<ProgramStateItem> m_programStateItems;
                    bool m_programStateItemsHasBeenSet;

                    /**
                     * 商场ID
                     */
                    uint64_t m_mallId;
                    bool m_mallIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_CREATEPROGRAMSTATEREQUEST_H_
