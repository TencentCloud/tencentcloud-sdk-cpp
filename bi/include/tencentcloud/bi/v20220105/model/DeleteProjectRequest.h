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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_DELETEPROJECTREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_DELETEPROJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * DeleteProject请求参数结构体
                */
                class DeleteProjectRequest : public AbstractModel
                {
                public:
                    DeleteProjectRequest();
                    ~DeleteProjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return Id 项目ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置项目ID
                     * @param _id 项目ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取随机数
                     * @return Seed 随机数
                     * 
                     */
                    std::string GetSeed() const;

                    /**
                     * 设置随机数
                     * @param _seed 随机数
                     * 
                     */
                    void SetSeed(const std::string& _seed);

                    /**
                     * 判断参数 Seed 是否已赋值
                     * @return Seed 是否已赋值
                     * 
                     */
                    bool SeedHasBeenSet() const;

                    /**
                     * 获取默认看板
                     * @return DefaultPanelType 默认看板
                     * 
                     */
                    int64_t GetDefaultPanelType() const;

                    /**
                     * 设置默认看板
                     * @param _defaultPanelType 默认看板
                     * 
                     */
                    void SetDefaultPanelType(const int64_t& _defaultPanelType);

                    /**
                     * 判断参数 DefaultPanelType 是否已赋值
                     * @return DefaultPanelType 是否已赋值
                     * 
                     */
                    bool DefaultPanelTypeHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 随机数
                     */
                    std::string m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * 默认看板
                     */
                    int64_t m_defaultPanelType;
                    bool m_defaultPanelTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_DELETEPROJECTREQUEST_H_
