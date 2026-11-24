/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_PGCONFIG_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_PGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * postgresql可选参数
                */
                class PGConfig : public AbstractModel
                {
                public:
                    PGConfig();
                    ~PGConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>规格</p>
                     * @return PGSpec <p>规格</p>
                     * 
                     */
                    std::string GetPGSpec() const;

                    /**
                     * 设置<p>规格</p>
                     * @param _pGSpec <p>规格</p>
                     * 
                     */
                    void SetPGSpec(const std::string& _pGSpec);

                    /**
                     * 判断参数 PGSpec 是否已赋值
                     * @return PGSpec 是否已赋值
                     * 
                     */
                    bool PGSpecHasBeenSet() const;

                    /**
                     * 获取<p>磁盘大小</p><p>单位：GB</p>
                     * @return PGStorage <p>磁盘大小</p><p>单位：GB</p>
                     * 
                     */
                    int64_t GetPGStorage() const;

                    /**
                     * 设置<p>磁盘大小</p><p>单位：GB</p>
                     * @param _pGStorage <p>磁盘大小</p><p>单位：GB</p>
                     * 
                     */
                    void SetPGStorage(const int64_t& _pGStorage);

                    /**
                     * 判断参数 PGStorage 是否已赋值
                     * @return PGStorage 是否已赋值
                     * 
                     */
                    bool PGStorageHasBeenSet() const;

                    /**
                     * 获取<p>实例类型（独享/共享）</p><p>参数格式：SHARED：共享，DEDICATED：独享； 仅满足要求的套餐支持独享；仅有独享pg支持指定pg参数（如规格、磁盘）</p>
                     * @return TenantType <p>实例类型（独享/共享）</p><p>参数格式：SHARED：共享，DEDICATED：独享； 仅满足要求的套餐支持独享；仅有独享pg支持指定pg参数（如规格、磁盘）</p>
                     * 
                     */
                    std::string GetTenantType() const;

                    /**
                     * 设置<p>实例类型（独享/共享）</p><p>参数格式：SHARED：共享，DEDICATED：独享； 仅满足要求的套餐支持独享；仅有独享pg支持指定pg参数（如规格、磁盘）</p>
                     * @param _tenantType <p>实例类型（独享/共享）</p><p>参数格式：SHARED：共享，DEDICATED：独享； 仅满足要求的套餐支持独享；仅有独享pg支持指定pg参数（如规格、磁盘）</p>
                     * 
                     */
                    void SetTenantType(const std::string& _tenantType);

                    /**
                     * 判断参数 TenantType 是否已赋值
                     * @return TenantType 是否已赋值
                     * 
                     */
                    bool TenantTypeHasBeenSet() const;

                private:

                    /**
                     * <p>规格</p>
                     */
                    std::string m_pGSpec;
                    bool m_pGSpecHasBeenSet;

                    /**
                     * <p>磁盘大小</p><p>单位：GB</p>
                     */
                    int64_t m_pGStorage;
                    bool m_pGStorageHasBeenSet;

                    /**
                     * <p>实例类型（独享/共享）</p><p>参数格式：SHARED：共享，DEDICATED：独享； 仅满足要求的套餐支持独享；仅有独享pg支持指定pg参数（如规格、磁盘）</p>
                     */
                    std::string m_tenantType;
                    bool m_tenantTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_PGCONFIG_H_
