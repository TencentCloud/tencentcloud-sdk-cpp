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

#ifndef TENCENTCLOUD_TAV_V20190118_MODEL_SCANFILEHASHREQUEST_H_
#define TENCENTCLOUD_TAV_V20190118_MODEL_SCANFILEHASHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tav
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * ScanFileHash请求参数结构体
                */
                class ScanFileHashRequest : public AbstractModel
                {
                public:
                    ScanFileHashRequest();
                    ~ScanFileHashRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取购买服务后获得的授权信息，用于保证请求有效性
                     * @return Key 购买服务后获得的授权信息，用于保证请求有效性
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置购买服务后获得的授权信息，用于保证请求有效性
                     * @param _key 购买服务后获得的授权信息，用于保证请求有效性
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
                     * 获取需要查询的md5值（支持单个和多个，多个md5间用逗号分格）
                     * @return Md5s 需要查询的md5值（支持单个和多个，多个md5间用逗号分格）
                     * 
                     */
                    std::string GetMd5s() const;

                    /**
                     * 设置需要查询的md5值（支持单个和多个，多个md5间用逗号分格）
                     * @param _md5s 需要查询的md5值（支持单个和多个，多个md5间用逗号分格）
                     * 
                     */
                    void SetMd5s(const std::string& _md5s);

                    /**
                     * 判断参数 Md5s 是否已赋值
                     * @return Md5s 是否已赋值
                     * 
                     */
                    bool Md5sHasBeenSet() const;

                    /**
                     * 获取保留字段默认填0
                     * @return WithCategory 保留字段默认填0
                     * 
                     */
                    std::string GetWithCategory() const;

                    /**
                     * 设置保留字段默认填0
                     * @param _withCategory 保留字段默认填0
                     * 
                     */
                    void SetWithCategory(const std::string& _withCategory);

                    /**
                     * 判断参数 WithCategory 是否已赋值
                     * @return WithCategory 是否已赋值
                     * 
                     */
                    bool WithCategoryHasBeenSet() const;

                    /**
                     * 获取松严规则控制字段默认填10（5-松、10-标准、15-严）
                     * @return SensitiveLevel 松严规则控制字段默认填10（5-松、10-标准、15-严）
                     * 
                     */
                    std::string GetSensitiveLevel() const;

                    /**
                     * 设置松严规则控制字段默认填10（5-松、10-标准、15-严）
                     * @param _sensitiveLevel 松严规则控制字段默认填10（5-松、10-标准、15-严）
                     * 
                     */
                    void SetSensitiveLevel(const std::string& _sensitiveLevel);

                    /**
                     * 判断参数 SensitiveLevel 是否已赋值
                     * @return SensitiveLevel 是否已赋值
                     * 
                     */
                    bool SensitiveLevelHasBeenSet() const;

                private:

                    /**
                     * 购买服务后获得的授权信息，用于保证请求有效性
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 需要查询的md5值（支持单个和多个，多个md5间用逗号分格）
                     */
                    std::string m_md5s;
                    bool m_md5sHasBeenSet;

                    /**
                     * 保留字段默认填0
                     */
                    std::string m_withCategory;
                    bool m_withCategoryHasBeenSet;

                    /**
                     * 松严规则控制字段默认填10（5-松、10-标准、15-严）
                     */
                    std::string m_sensitiveLevel;
                    bool m_sensitiveLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAV_V20190118_MODEL_SCANFILEHASHREQUEST_H_
