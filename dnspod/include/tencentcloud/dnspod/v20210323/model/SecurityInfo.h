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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_SECURITYINFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_SECURITYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 套餐中安全防护信息
                */
                class SecurityInfo : public AbstractModel
                {
                public:
                    SecurityInfo();
                    ~SecurityInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否是免费赠送：yes-是；no-不是
                     * @return IsDefendFree 是否是免费赠送：yes-是；no-不是
                     * 
                     */
                    std::string GetIsDefendFree() const;

                    /**
                     * 设置是否是免费赠送：yes-是；no-不是
                     * @param _isDefendFree 是否是免费赠送：yes-是；no-不是
                     * 
                     */
                    void SetIsDefendFree(const std::string& _isDefendFree);

                    /**
                     * 判断参数 IsDefendFree 是否已赋值
                     * @return IsDefendFree 是否已赋值
                     * 
                     */
                    bool IsDefendFreeHasBeenSet() const;

                    /**
                     * 获取防护类型
                     * @return Key 防护类型
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置防护类型
                     * @param _key 防护类型
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取资源 ID
                     * @return ResourceId 资源 ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源 ID
                     * @param _resourceId 资源 ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * 是否是免费赠送：yes-是；no-不是
                     */
                    std::string m_isDefendFree;
                    bool m_isDefendFreeHasBeenSet;

                    /**
                     * 防护类型
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 资源 ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_SECURITYINFO_H_
