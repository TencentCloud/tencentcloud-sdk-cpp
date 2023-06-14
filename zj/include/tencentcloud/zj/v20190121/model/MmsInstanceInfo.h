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

#ifndef TENCENTCLOUD_ZJ_V20190121_MODEL_MMSINSTANCEINFO_H_
#define TENCENTCLOUD_ZJ_V20190121_MODEL_MMSINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/zj/v20190121/model/MmsInstanceStateInfo.h>


namespace TencentCloud
{
    namespace Zj
    {
        namespace V20190121
        {
            namespace Model
            {
                /**
                * 彩信实例信息
InstanceId   int
	InstanceName string
	Status       int
	StatusInfo   string
	AppSubId     string
	Title        string
	Sign         string
	Contents     string
	CreatedAt    string
                */
                class MmsInstanceInfo : public AbstractModel
                {
                public:
                    MmsInstanceInfo();
                    ~MmsInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取彩信实例id
                     * @return InstanceId 彩信实例id
                     * 
                     */
                    int64_t GetInstanceId() const;

                    /**
                     * 设置彩信实例id
                     * @param _instanceId 彩信实例id
                     * 
                     */
                    void SetInstanceId(const int64_t& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取彩信实例名称
                     * @return InstanceName 彩信实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置彩信实例名称
                     * @param _instanceName 彩信实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取状态是否通知
                     * @return Status 状态是否通知
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态是否通知
                     * @param _status 状态是否通知
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例审核状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusInfo 实例审核状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MmsInstanceStateInfo> GetStatusInfo() const;

                    /**
                     * 设置实例审核状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusInfo 实例审核状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusInfo(const std::vector<MmsInstanceStateInfo>& _statusInfo);

                    /**
                     * 判断参数 StatusInfo 是否已赋值
                     * @return StatusInfo 是否已赋值
                     * 
                     */
                    bool StatusInfoHasBeenSet() const;

                    /**
                     * 获取业务码
                     * @return AppSubId 业务码
                     * 
                     */
                    std::string GetAppSubId() const;

                    /**
                     * 设置业务码
                     * @param _appSubId 业务码
                     * 
                     */
                    void SetAppSubId(const std::string& _appSubId);

                    /**
                     * 判断参数 AppSubId 是否已赋值
                     * @return AppSubId 是否已赋值
                     * 
                     */
                    bool AppSubIdHasBeenSet() const;

                    /**
                     * 获取彩信标题
                     * @return Title 彩信标题
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置彩信标题
                     * @param _title 彩信标题
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取签名
                     * @return Sign 签名
                     * 
                     */
                    std::string GetSign() const;

                    /**
                     * 设置签名
                     * @param _sign 签名
                     * 
                     */
                    void SetSign(const std::string& _sign);

                    /**
                     * 判断参数 Sign 是否已赋值
                     * @return Sign 是否已赋值
                     * 
                     */
                    bool SignHasBeenSet() const;

                    /**
                     * 获取彩信内容
                     * @return Contents 彩信内容
                     * 
                     */
                    std::string GetContents() const;

                    /**
                     * 设置彩信内容
                     * @param _contents 彩信内容
                     * 
                     */
                    void SetContents(const std::string& _contents);

                    /**
                     * 判断参数 Contents 是否已赋值
                     * @return Contents 是否已赋值
                     * 
                     */
                    bool ContentsHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
                     * @param _createdAt 创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取样例配置的链接地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Urls 样例配置的链接地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 设置样例配置的链接地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _urls 样例配置的链接地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUrls(const std::vector<std::string>& _urls);

                    /**
                     * 判断参数 Urls 是否已赋值
                     * @return Urls 是否已赋值
                     * 
                     */
                    bool UrlsHasBeenSet() const;

                    /**
                     * 获取机型列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PhoneType 机型列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<uint64_t> GetPhoneType() const;

                    /**
                     * 设置机型列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _phoneType 机型列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPhoneType(const std::vector<uint64_t>& _phoneType);

                    /**
                     * 判断参数 PhoneType 是否已赋值
                     * @return PhoneType 是否已赋值
                     * 
                     */
                    bool PhoneTypeHasBeenSet() const;

                    /**
                     * 获取普通参数序号数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CommonParams 普通参数序号数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<uint64_t> GetCommonParams() const;

                    /**
                     * 设置普通参数序号数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _commonParams 普通参数序号数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCommonParams(const std::vector<uint64_t>& _commonParams);

                    /**
                     * 判断参数 CommonParams 是否已赋值
                     * @return CommonParams 是否已赋值
                     * 
                     */
                    bool CommonParamsHasBeenSet() const;

                    /**
                     * 获取链接参数序号数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UrlParams 链接参数序号数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<uint64_t> GetUrlParams() const;

                    /**
                     * 设置链接参数序号数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _urlParams 链接参数序号数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUrlParams(const std::vector<uint64_t>& _urlParams);

                    /**
                     * 判断参数 UrlParams 是否已赋值
                     * @return UrlParams 是否已赋值
                     * 
                     */
                    bool UrlParamsHasBeenSet() const;

                private:

                    /**
                     * 彩信实例id
                     */
                    int64_t m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 彩信实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 状态是否通知
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例审核状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MmsInstanceStateInfo> m_statusInfo;
                    bool m_statusInfoHasBeenSet;

                    /**
                     * 业务码
                     */
                    std::string m_appSubId;
                    bool m_appSubIdHasBeenSet;

                    /**
                     * 彩信标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 签名
                     */
                    std::string m_sign;
                    bool m_signHasBeenSet;

                    /**
                     * 彩信内容
                     */
                    std::string m_contents;
                    bool m_contentsHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 样例配置的链接地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                    /**
                     * 机型列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_phoneType;
                    bool m_phoneTypeHasBeenSet;

                    /**
                     * 普通参数序号数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_commonParams;
                    bool m_commonParamsHasBeenSet;

                    /**
                     * 链接参数序号数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_urlParams;
                    bool m_urlParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ZJ_V20190121_MODEL_MMSINSTANCEINFO_H_
