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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_RESOURCEOFFLINE_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_RESOURCEOFFLINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 资源下线
                */
                class ResourceOffline : public AbstractModel
                {
                public:
                    ResourceOffline();
                    ~ResourceOffline() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源ID
                     * @return ResourceId 资源ID
                     * 
                     */
                    int64_t GetResourceId() const;

                    /**
                     * 设置资源ID
                     * @param _resourceId 资源ID
                     * 
                     */
                    void SetResourceId(const int64_t& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源下线时间
                     * @return ResourceDeleteTime 资源下线时间
                     * 
                     */
                    std::string GetResourceDeleteTime() const;

                    /**
                     * 设置资源下线时间
                     * @param _resourceDeleteTime 资源下线时间
                     * 
                     */
                    void SetResourceDeleteTime(const std::string& _resourceDeleteTime);

                    /**
                     * 判断参数 ResourceDeleteTime 是否已赋值
                     * @return ResourceDeleteTime 是否已赋值
                     * 
                     */
                    bool ResourceDeleteTimeHasBeenSet() const;

                    /**
                     * 获取资源下线提示
                     * @return ResourceDeleteMessage 资源下线提示
                     * 
                     */
                    std::string GetResourceDeleteMessage() const;

                    /**
                     * 设置资源下线提示
                     * @param _resourceDeleteMessage 资源下线提示
                     * 
                     */
                    void SetResourceDeleteMessage(const std::string& _resourceDeleteMessage);

                    /**
                     * 判断参数 ResourceDeleteMessage 是否已赋值
                     * @return ResourceDeleteMessage 是否已赋值
                     * 
                     */
                    bool ResourceDeleteMessageHasBeenSet() const;

                private:

                    /**
                     * 资源ID
                     */
                    int64_t m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源下线时间
                     */
                    std::string m_resourceDeleteTime;
                    bool m_resourceDeleteTimeHasBeenSet;

                    /**
                     * 资源下线提示
                     */
                    std::string m_resourceDeleteMessage;
                    bool m_resourceDeleteMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_RESOURCEOFFLINE_H_
