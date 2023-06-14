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

#ifndef TENCENTCLOUD_IC_V20190307_MODEL_APPINFO_H_
#define TENCENTCLOUD_IC_V20190307_MODEL_APPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ic
    {
        namespace V20190307
        {
            namespace Model
            {
                /**
                * 物联网卡应用信息详情
                */
                class AppInfo : public AbstractModel
                {
                public:
                    AppInfo();
                    ~AppInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用ID
                     * @return Sdkappid 应用ID
                     * 
                     */
                    std::string GetSdkappid() const;

                    /**
                     * 设置应用ID
                     * @param _sdkappid 应用ID
                     * 
                     */
                    void SetSdkappid(const std::string& _sdkappid);

                    /**
                     * 判断参数 Sdkappid 是否已赋值
                     * @return Sdkappid 是否已赋值
                     * 
                     */
                    bool SdkappidHasBeenSet() const;

                    /**
                     * 获取应用key
                     * @return Appkey 应用key
                     * 
                     */
                    std::string GetAppkey() const;

                    /**
                     * 设置应用key
                     * @param _appkey 应用key
                     * 
                     */
                    void SetAppkey(const std::string& _appkey);

                    /**
                     * 判断参数 Appkey 是否已赋值
                     * @return Appkey 是否已赋值
                     * 
                     */
                    bool AppkeyHasBeenSet() const;

                    /**
                     * 获取用户appid
                     * @return CloudAppid 用户appid
                     * 
                     */
                    std::string GetCloudAppid() const;

                    /**
                     * 设置用户appid
                     * @param _cloudAppid 用户appid
                     * 
                     */
                    void SetCloudAppid(const std::string& _cloudAppid);

                    /**
                     * 判断参数 CloudAppid 是否已赋值
                     * @return CloudAppid 是否已赋值
                     * 
                     */
                    bool CloudAppidHasBeenSet() const;

                    /**
                     * 获取应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 应用名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取应用描述
                     * @return Description 应用描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置应用描述
                     * @param _description 应用描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedTime 创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
                     * @param _createdTime 创建时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取应用类型
                     * @return BizType 应用类型
                     * 
                     */
                    int64_t GetBizType() const;

                    /**
                     * 设置应用类型
                     * @param _bizType 应用类型
                     * 
                     */
                    void SetBizType(const int64_t& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取用户Uin
                     * @return Uin 用户Uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户Uin
                     * @param _uin 用户Uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_sdkappid;
                    bool m_sdkappidHasBeenSet;

                    /**
                     * 应用key
                     */
                    std::string m_appkey;
                    bool m_appkeyHasBeenSet;

                    /**
                     * 用户appid
                     */
                    std::string m_cloudAppid;
                    bool m_cloudAppidHasBeenSet;

                    /**
                     * 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 应用描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 应用类型
                     */
                    int64_t m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 用户Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IC_V20190307_MODEL_APPINFO_H_
