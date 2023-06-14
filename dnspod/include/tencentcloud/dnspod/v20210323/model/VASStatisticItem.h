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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_VASSTATISTICITEM_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_VASSTATISTICITEM_H_

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
                * 域名增值服务用量
                */
                class VASStatisticItem : public AbstractModel
                {
                public:
                    VASStatisticItem();
                    ~VASStatisticItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取增值服务名称
                     * @return Name 增值服务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置增值服务名称
                     * @param _name 增值服务名称
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
                     * 获取增值服务标识
                     * @return Key 增值服务标识
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置增值服务标识
                     * @param _key 增值服务标识
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
                     * 获取增值服务最大用量
                     * @return LimitCount 增值服务最大用量
                     * 
                     */
                    uint64_t GetLimitCount() const;

                    /**
                     * 设置增值服务最大用量
                     * @param _limitCount 增值服务最大用量
                     * 
                     */
                    void SetLimitCount(const uint64_t& _limitCount);

                    /**
                     * 判断参数 LimitCount 是否已赋值
                     * @return LimitCount 是否已赋值
                     * 
                     */
                    bool LimitCountHasBeenSet() const;

                    /**
                     * 获取增值服务已使用的用量
                     * @return UseCount 增值服务已使用的用量
                     * 
                     */
                    uint64_t GetUseCount() const;

                    /**
                     * 设置增值服务已使用的用量
                     * @param _useCount 增值服务已使用的用量
                     * 
                     */
                    void SetUseCount(const uint64_t& _useCount);

                    /**
                     * 判断参数 UseCount 是否已赋值
                     * @return UseCount 是否已赋值
                     * 
                     */
                    bool UseCountHasBeenSet() const;

                private:

                    /**
                     * 增值服务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 增值服务标识
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 增值服务最大用量
                     */
                    uint64_t m_limitCount;
                    bool m_limitCountHasBeenSet;

                    /**
                     * 增值服务已使用的用量
                     */
                    uint64_t m_useCount;
                    bool m_useCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_VASSTATISTICITEM_H_
