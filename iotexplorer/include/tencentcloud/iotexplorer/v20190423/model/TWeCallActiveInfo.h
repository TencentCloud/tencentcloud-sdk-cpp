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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TWECALLACTIVEINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TWECALLACTIVEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TWeCall设备激活信息
                */
                class TWeCallActiveInfo : public AbstractModel
                {
                public:
                    TWeCallActiveInfo();
                    ~TWeCallActiveInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取小程序ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelId 小程序ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置小程序ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelId 小程序ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * @deprecated
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取Sn信息
                     * @return Sn Sn信息
                     * 
                     */
                    std::string GetSn() const;

                    /**
                     * 设置Sn信息
                     * @param _sn Sn信息
                     * 
                     */
                    void SetSn(const std::string& _sn);

                    /**
                     * 判断参数 Sn 是否已赋值
                     * @return Sn 是否已赋值
                     * 
                     */
                    bool SnHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return ExpireTime 过期时间
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置过期时间
                     * @param _expireTime 过期时间
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return PkgType 类型
                     * 
                     */
                    int64_t GetPkgType() const;

                    /**
                     * 设置类型
                     * @param _pkgType 类型
                     * 
                     */
                    void SetPkgType(const int64_t& _pkgType);

                    /**
                     * 判断参数 PkgType 是否已赋值
                     * @return PkgType 是否已赋值
                     * 
                     */
                    bool PkgTypeHasBeenSet() const;

                private:

                    /**
                     * 小程序ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * Sn信息
                     */
                    std::string m_sn;
                    bool m_snHasBeenSet;

                    /**
                     * 过期时间
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 类型
                     */
                    int64_t m_pkgType;
                    bool m_pkgTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TWECALLACTIVEINFO_H_
