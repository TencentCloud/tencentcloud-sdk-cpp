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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCESERVICECONTRACTVERSION_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCESERVICECONTRACTVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 服务契约版本信息
                */
                class GovernanceServiceContractVersion : public AbstractModel
                {
                public:
                    GovernanceServiceContractVersion();
                    ~GovernanceServiceContractVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取契约版本
                     * @return Version 契约版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置契约版本
                     * @param _version 契约版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取契约名称
                     * @return Name 契约名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置契约名称
                     * @param _name 契约名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取唯一名称
                     * @return Key 唯一名称
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置唯一名称
                     * @param _key 唯一名称
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                private:

                    /**
                     * 契约版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 契约名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 唯一名称
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCESERVICECONTRACTVERSION_H_
