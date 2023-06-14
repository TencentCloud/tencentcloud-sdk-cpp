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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRWORKREQUEST_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRWORKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * CreateCRWork请求参数结构体
                */
                class CreateCRWorkRequest : public AbstractModel
                {
                public:
                    CreateCRWorkRequest();
                    ~CreateCRWorkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取作品名称
                     * @return WorkName 作品名称
                     * 
                     */
                    std::string GetWorkName() const;

                    /**
                     * 设置作品名称
                     * @param _workName 作品名称
                     * 
                     */
                    void SetWorkName(const std::string& _workName);

                    /**
                     * 判断参数 WorkName 是否已赋值
                     * @return WorkName 是否已赋值
                     * 
                     */
                    bool WorkNameHasBeenSet() const;

                    /**
                     * 获取作品分类
                     * @return WorkCategory 作品分类
                     * 
                     */
                    std::string GetWorkCategory() const;

                    /**
                     * 设置作品分类
                     * @param _workCategory 作品分类
                     * 
                     */
                    void SetWorkCategory(const std::string& _workCategory);

                    /**
                     * 判断参数 WorkCategory 是否已赋值
                     * @return WorkCategory 是否已赋值
                     * 
                     */
                    bool WorkCategoryHasBeenSet() const;

                    /**
                     * 获取作品内容类型
                     * @return WorkType 作品内容类型
                     * 
                     */
                    std::string GetWorkType() const;

                    /**
                     * 设置作品内容类型
                     * @param _workType 作品内容类型
                     * 
                     */
                    void SetWorkType(const std::string& _workType);

                    /**
                     * 判断参数 WorkType 是否已赋值
                     * @return WorkType 是否已赋值
                     * 
                     */
                    bool WorkTypeHasBeenSet() const;

                    /**
                     * 获取作品标签
                     * @return WorkSign 作品标签
                     * 
                     */
                    std::string GetWorkSign() const;

                    /**
                     * 设置作品标签
                     * @param _workSign 作品标签
                     * 
                     */
                    void SetWorkSign(const std::string& _workSign);

                    /**
                     * 判断参数 WorkSign 是否已赋值
                     * @return WorkSign 是否已赋值
                     * 
                     */
                    bool WorkSignHasBeenSet() const;

                    /**
                     * 获取字段已废弃，作品图片
                     * @return WorkPic 字段已废弃，作品图片
                     * 
                     */
                    std::string GetWorkPic() const;

                    /**
                     * 设置字段已废弃，作品图片
                     * @param _workPic 字段已废弃，作品图片
                     * 
                     */
                    void SetWorkPic(const std::string& _workPic);

                    /**
                     * 判断参数 WorkPic 是否已赋值
                     * @return WorkPic 是否已赋值
                     * 
                     */
                    bool WorkPicHasBeenSet() const;

                    /**
                     * 获取作品描述
                     * @return WorkDesc 作品描述
                     * 
                     */
                    std::string GetWorkDesc() const;

                    /**
                     * 设置作品描述
                     * @param _workDesc 作品描述
                     * 
                     */
                    void SetWorkDesc(const std::string& _workDesc);

                    /**
                     * 判断参数 WorkDesc 是否已赋值
                     * @return WorkDesc 是否已赋值
                     * 
                     */
                    bool WorkDescHasBeenSet() const;

                    /**
                     * 获取是否原创：0-否 1-是
                     * @return IsOriginal 是否原创：0-否 1-是
                     * 
                     */
                    std::string GetIsOriginal() const;

                    /**
                     * 设置是否原创：0-否 1-是
                     * @param _isOriginal 是否原创：0-否 1-是
                     * 
                     */
                    void SetIsOriginal(const std::string& _isOriginal);

                    /**
                     * 判断参数 IsOriginal 是否已赋值
                     * @return IsOriginal 是否已赋值
                     * 
                     */
                    bool IsOriginalHasBeenSet() const;

                    /**
                     * 获取是否发布：0-未发布 1-已发布
                     * @return IsRelease 是否发布：0-未发布 1-已发布
                     * 
                     */
                    std::string GetIsRelease() const;

                    /**
                     * 设置是否发布：0-未发布 1-已发布
                     * @param _isRelease 是否发布：0-未发布 1-已发布
                     * 
                     */
                    void SetIsRelease(const std::string& _isRelease);

                    /**
                     * 判断参数 IsRelease 是否已赋值
                     * @return IsRelease 是否已赋值
                     * 
                     */
                    bool IsReleaseHasBeenSet() const;

                    /**
                     * 获取字段已废弃，著作权人ID
                     * @return ProducerID 字段已废弃，著作权人ID
                     * 
                     */
                    int64_t GetProducerID() const;

                    /**
                     * 设置字段已废弃，著作权人ID
                     * @param _producerID 字段已废弃，著作权人ID
                     * 
                     */
                    void SetProducerID(const int64_t& _producerID);

                    /**
                     * 判断参数 ProducerID 是否已赋值
                     * @return ProducerID 是否已赋值
                     * 
                     */
                    bool ProducerIDHasBeenSet() const;

                    /**
                     * 获取创作时间
                     * @return ProduceTime 创作时间
                     * 
                     */
                    std::string GetProduceTime() const;

                    /**
                     * 设置创作时间
                     * @param _produceTime 创作时间
                     * 
                     */
                    void SetProduceTime(const std::string& _produceTime);

                    /**
                     * 判断参数 ProduceTime 是否已赋值
                     * @return ProduceTime 是否已赋值
                     * 
                     */
                    bool ProduceTimeHasBeenSet() const;

                    /**
                     * 获取字段已废弃
                     * @return SampleContentURL 字段已废弃
                     * 
                     */
                    std::string GetSampleContentURL() const;

                    /**
                     * 设置字段已废弃
                     * @param _sampleContentURL 字段已废弃
                     * 
                     */
                    void SetSampleContentURL(const std::string& _sampleContentURL);

                    /**
                     * 判断参数 SampleContentURL 是否已赋值
                     * @return SampleContentURL 是否已赋值
                     * 
                     */
                    bool SampleContentURLHasBeenSet() const;

                    /**
                     * 获取作品下载地址
                     * @return SampleDownloadURL 作品下载地址
                     * 
                     */
                    std::string GetSampleDownloadURL() const;

                    /**
                     * 设置作品下载地址
                     * @param _sampleDownloadURL 作品下载地址
                     * 
                     */
                    void SetSampleDownloadURL(const std::string& _sampleDownloadURL);

                    /**
                     * 判断参数 SampleDownloadURL 是否已赋值
                     * @return SampleDownloadURL 是否已赋值
                     * 
                     */
                    bool SampleDownloadURLHasBeenSet() const;

                    /**
                     * 获取作品在线地址
                     * @return SamplePublicURL 作品在线地址
                     * 
                     */
                    std::string GetSamplePublicURL() const;

                    /**
                     * 设置作品在线地址
                     * @param _samplePublicURL 作品在线地址
                     * 
                     */
                    void SetSamplePublicURL(const std::string& _samplePublicURL);

                    /**
                     * 判断参数 SamplePublicURL 是否已赋值
                     * @return SamplePublicURL 是否已赋值
                     * 
                     */
                    bool SamplePublicURLHasBeenSet() const;

                    /**
                     * 获取字段已废弃，授予类型
                     * @return GrantType 字段已废弃，授予类型
                     * 
                     */
                    std::string GetGrantType() const;

                    /**
                     * 设置字段已废弃，授予类型
                     * @param _grantType 字段已废弃，授予类型
                     * 
                     */
                    void SetGrantType(const std::string& _grantType);

                    /**
                     * 判断参数 GrantType 是否已赋值
                     * @return GrantType 是否已赋值
                     * 
                     */
                    bool GrantTypeHasBeenSet() const;

                    /**
                     * 获取是否监测：0-不监测 1-监测
                     * @return IsMonitor 是否监测：0-不监测 1-监测
                     * 
                     */
                    std::string GetIsMonitor() const;

                    /**
                     * 设置是否监测：0-不监测 1-监测
                     * @param _isMonitor 是否监测：0-不监测 1-监测
                     * 
                     */
                    void SetIsMonitor(const std::string& _isMonitor);

                    /**
                     * 判断参数 IsMonitor 是否已赋值
                     * @return IsMonitor 是否已赋值
                     * 
                     */
                    bool IsMonitorHasBeenSet() const;

                    /**
                     * 获取是否存证：0-不存证  2-存证 注意是2
                     * @return IsCert 是否存证：0-不存证  2-存证 注意是2
                     * 
                     */
                    std::string GetIsCert() const;

                    /**
                     * 设置是否存证：0-不存证  2-存证 注意是2
                     * @param _isCert 是否存证：0-不存证  2-存证 注意是2
                     * 
                     */
                    void SetIsCert(const std::string& _isCert);

                    /**
                     * 判断参数 IsCert 是否已赋值
                     * @return IsCert 是否已赋值
                     * 
                     */
                    bool IsCertHasBeenSet() const;

                    /**
                     * 获取存证回调地址
                     * @return CertUrl 存证回调地址
                     * 
                     */
                    std::string GetCertUrl() const;

                    /**
                     * 设置存证回调地址
                     * @param _certUrl 存证回调地址
                     * 
                     */
                    void SetCertUrl(const std::string& _certUrl);

                    /**
                     * 判断参数 CertUrl 是否已赋值
                     * @return CertUrl 是否已赋值
                     * 
                     */
                    bool CertUrlHasBeenSet() const;

                    /**
                     * 获取监测回调地址
                     * @return MonitorUrl 监测回调地址
                     * 
                     */
                    std::string GetMonitorUrl() const;

                    /**
                     * 设置监测回调地址
                     * @param _monitorUrl 监测回调地址
                     * 
                     */
                    void SetMonitorUrl(const std::string& _monitorUrl);

                    /**
                     * 判断参数 MonitorUrl 是否已赋值
                     * @return MonitorUrl 是否已赋值
                     * 
                     */
                    bool MonitorUrlHasBeenSet() const;

                    /**
                     * 获取字段已废弃，创作性质
                     * @return ProduceType 字段已废弃，创作性质
                     * 
                     */
                    std::string GetProduceType() const;

                    /**
                     * 设置字段已废弃，创作性质
                     * @param _produceType 字段已废弃，创作性质
                     * 
                     */
                    void SetProduceType(const std::string& _produceType);

                    /**
                     * 判断参数 ProduceType 是否已赋值
                     * @return ProduceType 是否已赋值
                     * 
                     */
                    bool ProduceTypeHasBeenSet() const;

                    /**
                     * 获取白名单列表
                     * @return WhiteLists 白名单列表
                     * 
                     */
                    std::vector<std::string> GetWhiteLists() const;

                    /**
                     * 设置白名单列表
                     * @param _whiteLists 白名单列表
                     * 
                     */
                    void SetWhiteLists(const std::vector<std::string>& _whiteLists);

                    /**
                     * 判断参数 WhiteLists 是否已赋值
                     * @return WhiteLists 是否已赋值
                     * 
                     */
                    bool WhiteListsHasBeenSet() const;

                    /**
                     * 获取作品ID，忽略该字段
                     * @return WorkId 作品ID，忽略该字段
                     * 
                     */
                    int64_t GetWorkId() const;

                    /**
                     * 设置作品ID，忽略该字段
                     * @param _workId 作品ID，忽略该字段
                     * 
                     */
                    void SetWorkId(const int64_t& _workId);

                    /**
                     * 判断参数 WorkId 是否已赋值
                     * @return WorkId 是否已赋值
                     * 
                     */
                    bool WorkIdHasBeenSet() const;

                    /**
                     * 获取著作权人姓名
                     * @return ProducerName 著作权人姓名
                     * 
                     */
                    std::string GetProducerName() const;

                    /**
                     * 设置著作权人姓名
                     * @param _producerName 著作权人姓名
                     * 
                     */
                    void SetProducerName(const std::string& _producerName);

                    /**
                     * 判断参数 ProducerName 是否已赋值
                     * @return ProducerName 是否已赋值
                     * 
                     */
                    bool ProducerNameHasBeenSet() const;

                    /**
                     * 获取作者，小说类型必填
                     * @return Nickname 作者，小说类型必填
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置作者，小说类型必填
                     * @param _nickname 作者，小说类型必填
                     * 
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取授权书下载地址
                     * @return Authorization 授权书下载地址
                     * 
                     */
                    std::string GetAuthorization() const;

                    /**
                     * 设置授权书下载地址
                     * @param _authorization 授权书下载地址
                     * 
                     */
                    void SetAuthorization(const std::string& _authorization);

                    /**
                     * 判断参数 Authorization 是否已赋值
                     * @return Authorization 是否已赋值
                     * 
                     */
                    bool AuthorizationHasBeenSet() const;

                    /**
                     * 获取授权书开始时间
                     * @return AuthorizationStartTime 授权书开始时间
                     * 
                     */
                    std::string GetAuthorizationStartTime() const;

                    /**
                     * 设置授权书开始时间
                     * @param _authorizationStartTime 授权书开始时间
                     * 
                     */
                    void SetAuthorizationStartTime(const std::string& _authorizationStartTime);

                    /**
                     * 判断参数 AuthorizationStartTime 是否已赋值
                     * @return AuthorizationStartTime 是否已赋值
                     * 
                     */
                    bool AuthorizationStartTimeHasBeenSet() const;

                    /**
                     * 获取授权书结束时间
                     * @return AuthorizationEndTime 授权书结束时间
                     * 
                     */
                    std::string GetAuthorizationEndTime() const;

                    /**
                     * 设置授权书结束时间
                     * @param _authorizationEndTime 授权书结束时间
                     * 
                     */
                    void SetAuthorizationEndTime(const std::string& _authorizationEndTime);

                    /**
                     * 判断参数 AuthorizationEndTime 是否已赋值
                     * @return AuthorizationEndTime 是否已赋值
                     * 
                     */
                    bool AuthorizationEndTimeHasBeenSet() const;

                    /**
                     * 获取内容格式，支持txt、doc等，表示Content的具体格式
                     * @return ContentType 内容格式，支持txt、doc等，表示Content的具体格式
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置内容格式，支持txt、doc等，表示Content的具体格式
                     * @param _contentType 内容格式，支持txt、doc等，表示Content的具体格式
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取文件内容base64编码，该字段仅在无法提供下载链接时使用
                     * @return Content 文件内容base64编码，该字段仅在无法提供下载链接时使用
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置文件内容base64编码，该字段仅在无法提供下载链接时使用
                     * @param _content 文件内容base64编码，该字段仅在无法提供下载链接时使用
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取监测结束时间
                     * @return MonitorEndTime 监测结束时间
                     * 
                     */
                    std::string GetMonitorEndTime() const;

                    /**
                     * 设置监测结束时间
                     * @param _monitorEndTime 监测结束时间
                     * 
                     */
                    void SetMonitorEndTime(const std::string& _monitorEndTime);

                    /**
                     * 判断参数 MonitorEndTime 是否已赋值
                     * @return MonitorEndTime 是否已赋值
                     * 
                     */
                    bool MonitorEndTimeHasBeenSet() const;

                    /**
                     * 获取申请人ID，用于存证和取证
                     * @return ApplierId 申请人ID，用于存证和取证
                     * 
                     */
                    std::string GetApplierId() const;

                    /**
                     * 设置申请人ID，用于存证和取证
                     * @param _applierId 申请人ID，用于存证和取证
                     * 
                     */
                    void SetApplierId(const std::string& _applierId);

                    /**
                     * 判断参数 ApplierId 是否已赋值
                     * @return ApplierId 是否已赋值
                     * 
                     */
                    bool ApplierIdHasBeenSet() const;

                    /**
                     * 获取申请人姓名，用于存证和取证
                     * @return ApplierName 申请人姓名，用于存证和取证
                     * 
                     */
                    std::string GetApplierName() const;

                    /**
                     * 设置申请人姓名，用于存证和取证
                     * @param _applierName 申请人姓名，用于存证和取证
                     * 
                     */
                    void SetApplierName(const std::string& _applierName);

                    /**
                     * 判断参数 ApplierName 是否已赋值
                     * @return ApplierName 是否已赋值
                     * 
                     */
                    bool ApplierNameHasBeenSet() const;

                    /**
                     * 获取是否自动续期
                     * @return IsAutoRenew 是否自动续期
                     * 
                     */
                    std::string GetIsAutoRenew() const;

                    /**
                     * 设置是否自动续期
                     * @param _isAutoRenew 是否自动续期
                     * 
                     */
                    void SetIsAutoRenew(const std::string& _isAutoRenew);

                    /**
                     * 判断参数 IsAutoRenew 是否已赋值
                     * @return IsAutoRenew 是否已赋值
                     * 
                     */
                    bool IsAutoRenewHasBeenSet() const;

                private:

                    /**
                     * 作品名称
                     */
                    std::string m_workName;
                    bool m_workNameHasBeenSet;

                    /**
                     * 作品分类
                     */
                    std::string m_workCategory;
                    bool m_workCategoryHasBeenSet;

                    /**
                     * 作品内容类型
                     */
                    std::string m_workType;
                    bool m_workTypeHasBeenSet;

                    /**
                     * 作品标签
                     */
                    std::string m_workSign;
                    bool m_workSignHasBeenSet;

                    /**
                     * 字段已废弃，作品图片
                     */
                    std::string m_workPic;
                    bool m_workPicHasBeenSet;

                    /**
                     * 作品描述
                     */
                    std::string m_workDesc;
                    bool m_workDescHasBeenSet;

                    /**
                     * 是否原创：0-否 1-是
                     */
                    std::string m_isOriginal;
                    bool m_isOriginalHasBeenSet;

                    /**
                     * 是否发布：0-未发布 1-已发布
                     */
                    std::string m_isRelease;
                    bool m_isReleaseHasBeenSet;

                    /**
                     * 字段已废弃，著作权人ID
                     */
                    int64_t m_producerID;
                    bool m_producerIDHasBeenSet;

                    /**
                     * 创作时间
                     */
                    std::string m_produceTime;
                    bool m_produceTimeHasBeenSet;

                    /**
                     * 字段已废弃
                     */
                    std::string m_sampleContentURL;
                    bool m_sampleContentURLHasBeenSet;

                    /**
                     * 作品下载地址
                     */
                    std::string m_sampleDownloadURL;
                    bool m_sampleDownloadURLHasBeenSet;

                    /**
                     * 作品在线地址
                     */
                    std::string m_samplePublicURL;
                    bool m_samplePublicURLHasBeenSet;

                    /**
                     * 字段已废弃，授予类型
                     */
                    std::string m_grantType;
                    bool m_grantTypeHasBeenSet;

                    /**
                     * 是否监测：0-不监测 1-监测
                     */
                    std::string m_isMonitor;
                    bool m_isMonitorHasBeenSet;

                    /**
                     * 是否存证：0-不存证  2-存证 注意是2
                     */
                    std::string m_isCert;
                    bool m_isCertHasBeenSet;

                    /**
                     * 存证回调地址
                     */
                    std::string m_certUrl;
                    bool m_certUrlHasBeenSet;

                    /**
                     * 监测回调地址
                     */
                    std::string m_monitorUrl;
                    bool m_monitorUrlHasBeenSet;

                    /**
                     * 字段已废弃，创作性质
                     */
                    std::string m_produceType;
                    bool m_produceTypeHasBeenSet;

                    /**
                     * 白名单列表
                     */
                    std::vector<std::string> m_whiteLists;
                    bool m_whiteListsHasBeenSet;

                    /**
                     * 作品ID，忽略该字段
                     */
                    int64_t m_workId;
                    bool m_workIdHasBeenSet;

                    /**
                     * 著作权人姓名
                     */
                    std::string m_producerName;
                    bool m_producerNameHasBeenSet;

                    /**
                     * 作者，小说类型必填
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 授权书下载地址
                     */
                    std::string m_authorization;
                    bool m_authorizationHasBeenSet;

                    /**
                     * 授权书开始时间
                     */
                    std::string m_authorizationStartTime;
                    bool m_authorizationStartTimeHasBeenSet;

                    /**
                     * 授权书结束时间
                     */
                    std::string m_authorizationEndTime;
                    bool m_authorizationEndTimeHasBeenSet;

                    /**
                     * 内容格式，支持txt、doc等，表示Content的具体格式
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * 文件内容base64编码，该字段仅在无法提供下载链接时使用
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 监测结束时间
                     */
                    std::string m_monitorEndTime;
                    bool m_monitorEndTimeHasBeenSet;

                    /**
                     * 申请人ID，用于存证和取证
                     */
                    std::string m_applierId;
                    bool m_applierIdHasBeenSet;

                    /**
                     * 申请人姓名，用于存证和取证
                     */
                    std::string m_applierName;
                    bool m_applierNameHasBeenSet;

                    /**
                     * 是否自动续期
                     */
                    std::string m_isAutoRenew;
                    bool m_isAutoRenewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRWORKREQUEST_H_
