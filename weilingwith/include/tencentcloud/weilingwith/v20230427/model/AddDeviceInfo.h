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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ADDDEVICEINFO_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ADDDEVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 添加设备信息
                */
                class AddDeviceInfo : public AbstractModel
                {
                public:
                    AddDeviceInfo();
                    ~AddDeviceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品id
                     * @return ProductId 产品id
                     * 
                     */
                    int64_t GetProductId() const;

                    /**
                     * 设置产品id
                     * @param _productId 产品id
                     * 
                     */
                    void SetProductId(const int64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取设备sn序列号
                     * @return SN 设备sn序列号
                     * 
                     */
                    std::string GetSN() const;

                    /**
                     * 设置设备sn序列号
                     * @param _sN 设备sn序列号
                     * 
                     */
                    void SetSN(const std::string& _sN);

                    /**
                     * 判断参数 SN 是否已赋值
                     * @return SN 是否已赋值
                     * 
                     */
                    bool SNHasBeenSet() const;

                    /**
                     * 获取父设备wid，不为空表示导入子设备
                     * @return ParentWID 父设备wid，不为空表示导入子设备
                     * 
                     */
                    std::string GetParentWID() const;

                    /**
                     * 设置父设备wid，不为空表示导入子设备
                     * @param _parentWID 父设备wid，不为空表示导入子设备
                     * 
                     */
                    void SetParentWID(const std::string& _parentWID);

                    /**
                     * 判断参数 ParentWID 是否已赋值
                     * @return ParentWID 是否已赋值
                     * 
                     */
                    bool ParentWIDHasBeenSet() const;

                    /**
                     * 获取密钥来源：0-使用产品密钥 1-使用设备特有的密钥
                     * @return KeySource 密钥来源：0-使用产品密钥 1-使用设备特有的密钥
                     * 
                     */
                    int64_t GetKeySource() const;

                    /**
                     * 设置密钥来源：0-使用产品密钥 1-使用设备特有的密钥
                     * @param _keySource 密钥来源：0-使用产品密钥 1-使用设备特有的密钥
                     * 
                     */
                    void SetKeySource(const int64_t& _keySource);

                    /**
                     * 判断参数 KeySource 是否已赋值
                     * @return KeySource 是否已赋值
                     * 
                     */
                    bool KeySourceHasBeenSet() const;

                private:

                    /**
                     * 产品id
                     */
                    int64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备sn序列号
                     */
                    std::string m_sN;
                    bool m_sNHasBeenSet;

                    /**
                     * 父设备wid，不为空表示导入子设备
                     */
                    std::string m_parentWID;
                    bool m_parentWIDHasBeenSet;

                    /**
                     * 密钥来源：0-使用产品密钥 1-使用设备特有的密钥
                     */
                    int64_t m_keySource;
                    bool m_keySourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_ADDDEVICEINFO_H_
