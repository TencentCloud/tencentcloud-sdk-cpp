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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_MODIFYDEVICEFIELDINFO_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_MODIFYDEVICEFIELDINFO_H_

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
                * 设备自定义值修改信息入参
                */
                class ModifyDeviceFieldInfo : public AbstractModel
                {
                public:
                    ModifyDeviceFieldInfo();
                    ~ModifyDeviceFieldInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备id
                     * @return WID 设备id
                     * 
                     */
                    std::string GetWID() const;

                    /**
                     * 设置设备id
                     * @param _wID 设备id
                     * 
                     */
                    void SetWID(const std::string& _wID);

                    /**
                     * 判断参数 WID 是否已赋值
                     * @return WID 是否已赋值
                     * 
                     */
                    bool WIDHasBeenSet() const;

                    /**
                     * 获取自定义字段key
                     * @return Key 自定义字段key
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置自定义字段key
                     * @param _key 自定义字段key
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
                     * 获取自定义字段值
                     * @return Val 自定义字段值
                     * 
                     */
                    std::string GetVal() const;

                    /**
                     * 设置自定义字段值
                     * @param _val 自定义字段值
                     * 
                     */
                    void SetVal(const std::string& _val);

                    /**
                     * 判断参数 Val 是否已赋值
                     * @return Val 是否已赋值
                     * 
                     */
                    bool ValHasBeenSet() const;

                private:

                    /**
                     * 设备id
                     */
                    std::string m_wID;
                    bool m_wIDHasBeenSet;

                    /**
                     * 自定义字段key
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 自定义字段值
                     */
                    std::string m_val;
                    bool m_valHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_MODIFYDEVICEFIELDINFO_H_
