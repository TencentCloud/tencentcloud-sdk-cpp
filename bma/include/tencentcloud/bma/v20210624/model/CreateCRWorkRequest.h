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
                     */
                    std::string GetWorkName() const;

                    /**
                     * 设置作品名称
                     * @param WorkName 作品名称
                     */
                    void SetWorkName(const std::string& _workName);

                    /**
                     * 判断参数 WorkName 是否已赋值
                     * @return WorkName 是否已赋值
                     */
                    bool WorkNameHasBeenSet() const;

                    /**
                     * 获取作品分类
                     * @return WorkCategory 作品分类
                     */
                    std::string GetWorkCategory() const;

                    /**
                     * 设置作品分类
                     * @param WorkCategory 作品分类
                     */
                    void SetWorkCategory(const std::string& _workCategory);

                    /**
                     * 判断参数 WorkCategory 是否已赋值
                     * @return WorkCategory 是否已赋值
                     */
                    bool WorkCategoryHasBeenSet() const;

                    /**
                     * 获取作品内容类型
                     * @return WorkType 作品内容类型
                     */
                    std::string GetWorkType() const;

                    /**
                     * 设置作品内容类型
                     * @param WorkType 作品内容类型
                     */
                    void SetWorkType(const std::string& _workType);

                    /**
                     * 判断参数 WorkType 是否已赋值
                     * @return WorkType 是否已赋值
                     */
                    bool WorkTypeHasBeenSet() const;

                    /**
                     * 获取作品标签
                     * @return WorkSign 作品标签
                     */
                    std::string GetWorkSign() const;

                    /**
                     * 设置作品标签
                     * @param WorkSign 作品标签
                     */
                    void SetWorkSign(const std::string& _workSign);

                    /**
                     * 判断参数 WorkSign 是否已赋值
                     * @return WorkSign 是否已赋值
                     */
                    bool WorkSignHasBeenSet() const;

                    /**
                     * 获取作品图片
                     * @return WorkPic 作品图片
                     */
                    std::string GetWorkPic() const;

                    /**
                     * 设置作品图片
                     * @param WorkPic 作品图片
                     */
                    void SetWorkPic(const std::string& _workPic);

                    /**
                     * 判断参数 WorkPic 是否已赋值
                     * @return WorkPic 是否已赋值
                     */
                    bool WorkPicHasBeenSet() const;

                    /**
                     * 获取创作描述
                     * @return WorkDesc 创作描述
                     */
                    std::string GetWorkDesc() const;

                    /**
                     * 设置创作描述
                     * @param WorkDesc 创作描述
                     */
                    void SetWorkDesc(const std::string& _workDesc);

                    /**
                     * 判断参数 WorkDesc 是否已赋值
                     * @return WorkDesc 是否已赋值
                     */
                    bool WorkDescHasBeenSet() const;

                    /**
                     * 获取是否原创 0:否 1:是
                     * @return IsOriginal 是否原创 0:否 1:是
                     */
                    std::string GetIsOriginal() const;

                    /**
                     * 设置是否原创 0:否 1:是
                     * @param IsOriginal 是否原创 0:否 1:是
                     */
                    void SetIsOriginal(const std::string& _isOriginal);

                    /**
                     * 判断参数 IsOriginal 是否已赋值
                     * @return IsOriginal 是否已赋值
                     */
                    bool IsOriginalHasBeenSet() const;

                    /**
                     * 获取是否发布 0：未发布 1：已发布
                     * @return IsRelease 是否发布 0：未发布 1：已发布
                     */
                    std::string GetIsRelease() const;

                    /**
                     * 设置是否发布 0：未发布 1：已发布
                     * @param IsRelease 是否发布 0：未发布 1：已发布
                     */
                    void SetIsRelease(const std::string& _isRelease);

                    /**
                     * 判断参数 IsRelease 是否已赋值
                     * @return IsRelease 是否已赋值
                     */
                    bool IsReleaseHasBeenSet() const;

                    /**
                     * 获取著作权人ID
                     * @return ProducerID 著作权人ID
                     */
                    int64_t GetProducerID() const;

                    /**
                     * 设置著作权人ID
                     * @param ProducerID 著作权人ID
                     */
                    void SetProducerID(const int64_t& _producerID);

                    /**
                     * 判断参数 ProducerID 是否已赋值
                     * @return ProducerID 是否已赋值
                     */
                    bool ProducerIDHasBeenSet() const;

                    /**
                     * 获取创作时间
                     * @return ProduceTime 创作时间
                     */
                    std::string GetProduceTime() const;

                    /**
                     * 设置创作时间
                     * @param ProduceTime 创作时间
                     */
                    void SetProduceTime(const std::string& _produceTime);

                    /**
                     * 判断参数 ProduceTime 是否已赋值
                     * @return ProduceTime 是否已赋值
                     */
                    bool ProduceTimeHasBeenSet() const;

                    /**
                     * 获取样品文件路径
                     * @return SampleContentURL 样品文件路径
                     */
                    std::string GetSampleContentURL() const;

                    /**
                     * 设置样品文件路径
                     * @param SampleContentURL 样品文件路径
                     */
                    void SetSampleContentURL(const std::string& _sampleContentURL);

                    /**
                     * 判断参数 SampleContentURL 是否已赋值
                     * @return SampleContentURL 是否已赋值
                     */
                    bool SampleContentURLHasBeenSet() const;

                    /**
                     * 获取样本下载Url
                     * @return SampleDownloadURL 样本下载Url
                     */
                    std::string GetSampleDownloadURL() const;

                    /**
                     * 设置样本下载Url
                     * @param SampleDownloadURL 样本下载Url
                     */
                    void SetSampleDownloadURL(const std::string& _sampleDownloadURL);

                    /**
                     * 判断参数 SampleDownloadURL 是否已赋值
                     * @return SampleDownloadURL 是否已赋值
                     */
                    bool SampleDownloadURLHasBeenSet() const;

                    /**
                     * 获取授予类型
                     * @return GrantType 授予类型
                     */
                    std::string GetGrantType() const;

                    /**
                     * 设置授予类型
                     * @param GrantType 授予类型
                     */
                    void SetGrantType(const std::string& _grantType);

                    /**
                     * 判断参数 GrantType 是否已赋值
                     * @return GrantType 是否已赋值
                     */
                    bool GrantTypeHasBeenSet() const;

                    /**
                     * 获取作品发布Url
                     * @return SamplePublicURL 作品发布Url
                     */
                    std::string GetSamplePublicURL() const;

                    /**
                     * 设置作品发布Url
                     * @param SamplePublicURL 作品发布Url
                     */
                    void SetSamplePublicURL(const std::string& _samplePublicURL);

                    /**
                     * 判断参数 SamplePublicURL 是否已赋值
                     * @return SamplePublicURL 是否已赋值
                     */
                    bool SamplePublicURLHasBeenSet() const;

                    /**
                     * 获取是否启用监测 0：不启用 1：启用 默认为0
                     * @return IsMonitor 是否启用监测 0：不启用 1：启用 默认为0
                     */
                    std::string GetIsMonitor() const;

                    /**
                     * 设置是否启用监测 0：不启用 1：启用 默认为0
                     * @param IsMonitor 是否启用监测 0：不启用 1：启用 默认为0
                     */
                    void SetIsMonitor(const std::string& _isMonitor);

                    /**
                     * 判断参数 IsMonitor 是否已赋值
                     * @return IsMonitor 是否已赋值
                     */
                    bool IsMonitorHasBeenSet() const;

                    /**
                     * 获取是否启用存证0：不启用 1：启用 默认为1
                     * @return IsCert 是否启用存证0：不启用 1：启用 默认为1
                     */
                    std::string GetIsCert() const;

                    /**
                     * 设置是否启用存证0：不启用 1：启用 默认为1
                     * @param IsCert 是否启用存证0：不启用 1：启用 默认为1
                     */
                    void SetIsCert(const std::string& _isCert);

                    /**
                     * 判断参数 IsCert 是否已赋值
                     * @return IsCert 是否已赋值
                     */
                    bool IsCertHasBeenSet() const;

                    /**
                     * 获取存证回调地址
                     * @return CertUrl 存证回调地址
                     */
                    std::string GetCertUrl() const;

                    /**
                     * 设置存证回调地址
                     * @param CertUrl 存证回调地址
                     */
                    void SetCertUrl(const std::string& _certUrl);

                    /**
                     * 判断参数 CertUrl 是否已赋值
                     * @return CertUrl 是否已赋值
                     */
                    bool CertUrlHasBeenSet() const;

                    /**
                     * 获取监测回调地址
                     * @return MonitorUrl 监测回调地址
                     */
                    std::string GetMonitorUrl() const;

                    /**
                     * 设置监测回调地址
                     * @param MonitorUrl 监测回调地址
                     */
                    void SetMonitorUrl(const std::string& _monitorUrl);

                    /**
                     * 判断参数 MonitorUrl 是否已赋值
                     * @return MonitorUrl 是否已赋值
                     */
                    bool MonitorUrlHasBeenSet() const;

                    /**
                     * 获取创作性质（原创,改编,翻译,汇编,注释,整理,其他)
                     * @return ProduceType 创作性质（原创,改编,翻译,汇编,注释,整理,其他)
                     */
                    std::string GetProduceType() const;

                    /**
                     * 设置创作性质（原创,改编,翻译,汇编,注释,整理,其他)
                     * @param ProduceType 创作性质（原创,改编,翻译,汇编,注释,整理,其他)
                     */
                    void SetProduceType(const std::string& _produceType);

                    /**
                     * 判断参数 ProduceType 是否已赋值
                     * @return ProduceType 是否已赋值
                     */
                    bool ProduceTypeHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return WhiteLists xxx
                     */
                    std::vector<std::string> GetWhiteLists() const;

                    /**
                     * 设置xxx
                     * @param WhiteLists xxx
                     */
                    void SetWhiteLists(const std::vector<std::string>& _whiteLists);

                    /**
                     * 判断参数 WhiteLists 是否已赋值
                     * @return WhiteLists 是否已赋值
                     */
                    bool WhiteListsHasBeenSet() const;

                    /**
                     * 获取x
                     * @return WorkId x
                     */
                    int64_t GetWorkId() const;

                    /**
                     * 设置x
                     * @param WorkId x
                     */
                    void SetWorkId(const int64_t& _workId);

                    /**
                     * 判断参数 WorkId 是否已赋值
                     * @return WorkId 是否已赋值
                     */
                    bool WorkIdHasBeenSet() const;

                    /**
                     * 获取xx
                     * @return ProducerName xx
                     */
                    std::string GetProducerName() const;

                    /**
                     * 设置xx
                     * @param ProducerName xx
                     */
                    void SetProducerName(const std::string& _producerName);

                    /**
                     * 判断参数 ProducerName 是否已赋值
                     * @return ProducerName 是否已赋值
                     */
                    bool ProducerNameHasBeenSet() const;

                    /**
                     * 获取xx
                     * @return Nickname xx
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置xx
                     * @param Nickname xx
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取x
                     * @return Authorization x
                     */
                    std::string GetAuthorization() const;

                    /**
                     * 设置x
                     * @param Authorization x
                     */
                    void SetAuthorization(const std::string& _authorization);

                    /**
                     * 判断参数 Authorization 是否已赋值
                     * @return Authorization 是否已赋值
                     */
                    bool AuthorizationHasBeenSet() const;

                    /**
                     * 获取x
                     * @return AuthorizationStartTime x
                     */
                    std::string GetAuthorizationStartTime() const;

                    /**
                     * 设置x
                     * @param AuthorizationStartTime x
                     */
                    void SetAuthorizationStartTime(const std::string& _authorizationStartTime);

                    /**
                     * 判断参数 AuthorizationStartTime 是否已赋值
                     * @return AuthorizationStartTime 是否已赋值
                     */
                    bool AuthorizationStartTimeHasBeenSet() const;

                    /**
                     * 获取x
                     * @return AuthorizationEndTime x
                     */
                    std::string GetAuthorizationEndTime() const;

                    /**
                     * 设置x
                     * @param AuthorizationEndTime x
                     */
                    void SetAuthorizationEndTime(const std::string& _authorizationEndTime);

                    /**
                     * 判断参数 AuthorizationEndTime 是否已赋值
                     * @return AuthorizationEndTime 是否已赋值
                     */
                    bool AuthorizationEndTimeHasBeenSet() const;

                    /**
                     * 获取x
                     * @return ContentType x
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置x
                     * @param ContentType x
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取x
                     * @return Content x
                     */
                    std::string GetContent() const;

                    /**
                     * 设置x
                     * @param Content x
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

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
                     * 作品图片
                     */
                    std::string m_workPic;
                    bool m_workPicHasBeenSet;

                    /**
                     * 创作描述
                     */
                    std::string m_workDesc;
                    bool m_workDescHasBeenSet;

                    /**
                     * 是否原创 0:否 1:是
                     */
                    std::string m_isOriginal;
                    bool m_isOriginalHasBeenSet;

                    /**
                     * 是否发布 0：未发布 1：已发布
                     */
                    std::string m_isRelease;
                    bool m_isReleaseHasBeenSet;

                    /**
                     * 著作权人ID
                     */
                    int64_t m_producerID;
                    bool m_producerIDHasBeenSet;

                    /**
                     * 创作时间
                     */
                    std::string m_produceTime;
                    bool m_produceTimeHasBeenSet;

                    /**
                     * 样品文件路径
                     */
                    std::string m_sampleContentURL;
                    bool m_sampleContentURLHasBeenSet;

                    /**
                     * 样本下载Url
                     */
                    std::string m_sampleDownloadURL;
                    bool m_sampleDownloadURLHasBeenSet;

                    /**
                     * 授予类型
                     */
                    std::string m_grantType;
                    bool m_grantTypeHasBeenSet;

                    /**
                     * 作品发布Url
                     */
                    std::string m_samplePublicURL;
                    bool m_samplePublicURLHasBeenSet;

                    /**
                     * 是否启用监测 0：不启用 1：启用 默认为0
                     */
                    std::string m_isMonitor;
                    bool m_isMonitorHasBeenSet;

                    /**
                     * 是否启用存证0：不启用 1：启用 默认为1
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
                     * 创作性质（原创,改编,翻译,汇编,注释,整理,其他)
                     */
                    std::string m_produceType;
                    bool m_produceTypeHasBeenSet;

                    /**
                     * xxx
                     */
                    std::vector<std::string> m_whiteLists;
                    bool m_whiteListsHasBeenSet;

                    /**
                     * x
                     */
                    int64_t m_workId;
                    bool m_workIdHasBeenSet;

                    /**
                     * xx
                     */
                    std::string m_producerName;
                    bool m_producerNameHasBeenSet;

                    /**
                     * xx
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * x
                     */
                    std::string m_authorization;
                    bool m_authorizationHasBeenSet;

                    /**
                     * x
                     */
                    std::string m_authorizationStartTime;
                    bool m_authorizationStartTimeHasBeenSet;

                    /**
                     * x
                     */
                    std::string m_authorizationEndTime;
                    bool m_authorizationEndTimeHasBeenSet;

                    /**
                     * x
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * x
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRWORKREQUEST_H_
