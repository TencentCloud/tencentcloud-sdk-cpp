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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_AUTHMINIPROGRAMAPPINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_AUTHMINIPROGRAMAPPINFO_H_

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
                * 授权小程序信息
                */
                class AuthMiniProgramAppInfo : public AbstractModel
                {
                public:
                    AuthMiniProgramAppInfo();
                    ~AuthMiniProgramAppInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取小程序APPID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MiniProgramAppId 小程序APPID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMiniProgramAppId() const;

                    /**
                     * 设置小程序APPID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _miniProgramAppId 小程序APPID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMiniProgramAppId(const std::string& _miniProgramAppId);

                    /**
                     * 判断参数 MiniProgramAppId 是否已赋值
                     * @return MiniProgramAppId 是否已赋值
                     * 
                     */
                    bool MiniProgramAppIdHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取小程序名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MiniProgramName 小程序名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMiniProgramName() const;

                    /**
                     * 设置小程序名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _miniProgramName 小程序名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMiniProgramName(const std::string& _miniProgramName);

                    /**
                     * 判断参数 MiniProgramName 是否已赋值
                     * @return MiniProgramName 是否已赋值
                     * 
                     */
                    bool MiniProgramNameHasBeenSet() const;

                    /**
                     * 获取激活码数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LicenseNum 激活码数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLicenseNum() const;

                    /**
                     * 设置激活码数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _licenseNum 激活码数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLicenseNum(const int64_t& _licenseNum);

                    /**
                     * 判断参数 LicenseNum 是否已赋值
                     * @return LicenseNum 是否已赋值
                     * 
                     */
                    bool LicenseNumHasBeenSet() const;

                    /**
                     * 获取应用ID 
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IotAppId 应用ID 
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIotAppId() const;

                    /**
                     * 设置应用ID 
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iotAppId 应用ID 
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIotAppId(const std::string& _iotAppId);

                    /**
                     * 判断参数 IotAppId 是否已赋值
                     * @return IotAppId 是否已赋值
                     * 
                     */
                    bool IotAppIdHasBeenSet() const;

                    /**
                     * 获取应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IotAppName 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIotAppName() const;

                    /**
                     * 设置应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iotAppName 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIotAppName(const std::string& _iotAppName);

                    /**
                     * 判断参数 IotAppName 是否已赋值
                     * @return IotAppName 是否已赋值
                     * 
                     */
                    bool IotAppNameHasBeenSet() const;

                private:

                    /**
                     * 小程序APPID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_miniProgramAppId;
                    bool m_miniProgramAppIdHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 小程序名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_miniProgramName;
                    bool m_miniProgramNameHasBeenSet;

                    /**
                     * 激活码数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_licenseNum;
                    bool m_licenseNumHasBeenSet;

                    /**
                     * 应用ID 
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iotAppId;
                    bool m_iotAppIdHasBeenSet;

                    /**
                     * 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iotAppName;
                    bool m_iotAppNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_AUTHMINIPROGRAMAPPINFO_H_
