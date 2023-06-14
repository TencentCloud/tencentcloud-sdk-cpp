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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_DESCRIBECRWORKINFORESPONSE_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_DESCRIBECRWORKINFORESPONSE_H_

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
                * DescribeCRWorkInfo返回参数结构体
                */
                class DescribeCRWorkInfoResponse : public AbstractModel
                {
                public:
                    DescribeCRWorkInfoResponse();
                    ~DescribeCRWorkInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取作品名称
                     * @return WorkName 作品名称
                     * 
                     */
                    std::string GetWorkName() const;

                    /**
                     * 判断参数 WorkName 是否已赋值
                     * @return WorkName 是否已赋值
                     * 
                     */
                    bool WorkNameHasBeenSet() const;

                    /**
                     * 获取监测状态
                     * @return MonitorStatus 监测状态
                     * 
                     */
                    int64_t GetMonitorStatus() const;

                    /**
                     * 判断参数 MonitorStatus 是否已赋值
                     * @return MonitorStatus 是否已赋值
                     * 
                     */
                    bool MonitorStatusHasBeenSet() const;

                    /**
                     * 获取授权文件状态
                     * @return AuthStatus 授权文件状态
                     * 
                     */
                    int64_t GetAuthStatus() const;

                    /**
                     * 判断参数 AuthStatus 是否已赋值
                     * @return AuthStatus 是否已赋值
                     * 
                     */
                    bool AuthStatusHasBeenSet() const;

                    /**
                     * 获取委托书状态
                     * @return CommStatus 委托书状态
                     * 
                     */
                    int64_t GetCommStatus() const;

                    /**
                     * 判断参数 CommStatus 是否已赋值
                     * @return CommStatus 是否已赋值
                     * 
                     */
                    bool CommStatusHasBeenSet() const;

                    /**
                     * 获取是否著作权人
                     * @return IsProducer 是否著作权人
                     * 
                     */
                    int64_t GetIsProducer() const;

                    /**
                     * 判断参数 IsProducer 是否已赋值
                     * @return IsProducer 是否已赋值
                     * 
                     */
                    bool IsProducerHasBeenSet() const;

                    /**
                     * 获取存证证书状态
                     * @return EvidenceStatus 存证证书状态
                     * 
                     */
                    int64_t GetEvidenceStatus() const;

                    /**
                     * 判断参数 EvidenceStatus 是否已赋值
                     * @return EvidenceStatus 是否已赋值
                     * 
                     */
                    bool EvidenceStatusHasBeenSet() const;

                    /**
                     * 获取作品类型
                     * @return WorkCategory 作品类型
                     * 
                     */
                    std::string GetWorkCategory() const;

                    /**
                     * 判断参数 WorkCategory 是否已赋值
                     * @return WorkCategory 是否已赋值
                     * 
                     */
                    bool WorkCategoryHasBeenSet() const;

                    /**
                     * 获取是否原创
                     * @return IsOriginal 是否原创
                     * 
                     */
                    std::string GetIsOriginal() const;

                    /**
                     * 判断参数 IsOriginal 是否已赋值
                     * @return IsOriginal 是否已赋值
                     * 
                     */
                    bool IsOriginalHasBeenSet() const;

                    /**
                     * 获取是否已发表
                     * @return IsRelease 是否已发表
                     * 
                     */
                    std::string GetIsRelease() const;

                    /**
                     * 判断参数 IsRelease 是否已赋值
                     * @return IsRelease 是否已赋值
                     * 
                     */
                    bool IsReleaseHasBeenSet() const;

                    /**
                     * 获取著作权人姓名
                     * @return ProducerName 著作权人姓名
                     * 
                     */
                    std::string GetProducerName() const;

                    /**
                     * 判断参数 ProducerName 是否已赋值
                     * @return ProducerName 是否已赋值
                     * 
                     */
                    bool ProducerNameHasBeenSet() const;

                    /**
                     * 获取发表时间
                     * @return ProduceTime 发表时间
                     * 
                     */
                    std::string GetProduceTime() const;

                    /**
                     * 判断参数 ProduceTime 是否已赋值
                     * @return ProduceTime 是否已赋值
                     * 
                     */
                    bool ProduceTimeHasBeenSet() const;

                    /**
                     * 获取白名单
                     * @return WhiteLists 白名单
                     * 
                     */
                    std::vector<std::string> GetWhiteLists() const;

                    /**
                     * 判断参数 WhiteLists 是否已赋值
                     * @return WhiteLists 是否已赋值
                     * 
                     */
                    bool WhiteListsHasBeenSet() const;

                    /**
                     * 获取作品描述
                     * @return WorkDesc 作品描述
                     * 
                     */
                    std::string GetWorkDesc() const;

                    /**
                     * 判断参数 WorkDesc 是否已赋值
                     * @return WorkDesc 是否已赋值
                     * 
                     */
                    bool WorkDescHasBeenSet() const;

                    /**
                     * 获取授权书
                     * @return Authorization 授权书
                     * 
                     */
                    std::string GetAuthorization() const;

                    /**
                     * 判断参数 Authorization 是否已赋值
                     * @return Authorization 是否已赋值
                     * 
                     */
                    bool AuthorizationHasBeenSet() const;

                    /**
                     * 获取授权书生效日期
                     * @return AuthorizationStartTime 授权书生效日期
                     * 
                     */
                    std::string GetAuthorizationStartTime() const;

                    /**
                     * 判断参数 AuthorizationStartTime 是否已赋值
                     * @return AuthorizationStartTime 是否已赋值
                     * 
                     */
                    bool AuthorizationStartTimeHasBeenSet() const;

                    /**
                     * 获取授权书截止日期
                     * @return AuthorizationEndTime 授权书截止日期
                     * 
                     */
                    std::string GetAuthorizationEndTime() const;

                    /**
                     * 判断参数 AuthorizationEndTime 是否已赋值
                     * @return AuthorizationEndTime 是否已赋值
                     * 
                     */
                    bool AuthorizationEndTimeHasBeenSet() const;

                    /**
                     * 获取委托书
                     * @return Commission 委托书
                     * 
                     */
                    std::string GetCommission() const;

                    /**
                     * 判断参数 Commission 是否已赋值
                     * @return Commission 是否已赋值
                     * 
                     */
                    bool CommissionHasBeenSet() const;

                    /**
                     * 获取委托书生效日期
                     * @return CommissionStartTime 委托书生效日期
                     * 
                     */
                    std::string GetCommissionStartTime() const;

                    /**
                     * 判断参数 CommissionStartTime 是否已赋值
                     * @return CommissionStartTime 是否已赋值
                     * 
                     */
                    bool CommissionStartTimeHasBeenSet() const;

                    /**
                     * 获取委托书截止日期
                     * @return CommissionEndTime 委托书截止日期
                     * 
                     */
                    std::string GetCommissionEndTime() const;

                    /**
                     * 判断参数 CommissionEndTime 是否已赋值
                     * @return CommissionEndTime 是否已赋值
                     * 
                     */
                    bool CommissionEndTimeHasBeenSet() const;

                    /**
                     * 获取存证证书
                     * @return EvidenceUrl 存证证书
                     * 
                     */
                    std::string GetEvidenceUrl() const;

                    /**
                     * 判断参数 EvidenceUrl 是否已赋值
                     * @return EvidenceUrl 是否已赋值
                     * 
                     */
                    bool EvidenceUrlHasBeenSet() const;

                    /**
                     * 获取存证证书生效日期
                     * @return EvidenceStartTime 存证证书生效日期
                     * 
                     */
                    std::string GetEvidenceStartTime() const;

                    /**
                     * 判断参数 EvidenceStartTime 是否已赋值
                     * @return EvidenceStartTime 是否已赋值
                     * 
                     */
                    bool EvidenceStartTimeHasBeenSet() const;

                    /**
                     * 获取存证证书截止日期
                     * @return EvidenceEndTime 存证证书截止日期
                     * 
                     */
                    std::string GetEvidenceEndTime() const;

                    /**
                     * 判断参数 EvidenceEndTime 是否已赋值
                     * @return EvidenceEndTime 是否已赋值
                     * 
                     */
                    bool EvidenceEndTimeHasBeenSet() const;

                private:

                    /**
                     * 作品名称
                     */
                    std::string m_workName;
                    bool m_workNameHasBeenSet;

                    /**
                     * 监测状态
                     */
                    int64_t m_monitorStatus;
                    bool m_monitorStatusHasBeenSet;

                    /**
                     * 授权文件状态
                     */
                    int64_t m_authStatus;
                    bool m_authStatusHasBeenSet;

                    /**
                     * 委托书状态
                     */
                    int64_t m_commStatus;
                    bool m_commStatusHasBeenSet;

                    /**
                     * 是否著作权人
                     */
                    int64_t m_isProducer;
                    bool m_isProducerHasBeenSet;

                    /**
                     * 存证证书状态
                     */
                    int64_t m_evidenceStatus;
                    bool m_evidenceStatusHasBeenSet;

                    /**
                     * 作品类型
                     */
                    std::string m_workCategory;
                    bool m_workCategoryHasBeenSet;

                    /**
                     * 是否原创
                     */
                    std::string m_isOriginal;
                    bool m_isOriginalHasBeenSet;

                    /**
                     * 是否已发表
                     */
                    std::string m_isRelease;
                    bool m_isReleaseHasBeenSet;

                    /**
                     * 著作权人姓名
                     */
                    std::string m_producerName;
                    bool m_producerNameHasBeenSet;

                    /**
                     * 发表时间
                     */
                    std::string m_produceTime;
                    bool m_produceTimeHasBeenSet;

                    /**
                     * 白名单
                     */
                    std::vector<std::string> m_whiteLists;
                    bool m_whiteListsHasBeenSet;

                    /**
                     * 作品描述
                     */
                    std::string m_workDesc;
                    bool m_workDescHasBeenSet;

                    /**
                     * 授权书
                     */
                    std::string m_authorization;
                    bool m_authorizationHasBeenSet;

                    /**
                     * 授权书生效日期
                     */
                    std::string m_authorizationStartTime;
                    bool m_authorizationStartTimeHasBeenSet;

                    /**
                     * 授权书截止日期
                     */
                    std::string m_authorizationEndTime;
                    bool m_authorizationEndTimeHasBeenSet;

                    /**
                     * 委托书
                     */
                    std::string m_commission;
                    bool m_commissionHasBeenSet;

                    /**
                     * 委托书生效日期
                     */
                    std::string m_commissionStartTime;
                    bool m_commissionStartTimeHasBeenSet;

                    /**
                     * 委托书截止日期
                     */
                    std::string m_commissionEndTime;
                    bool m_commissionEndTimeHasBeenSet;

                    /**
                     * 存证证书
                     */
                    std::string m_evidenceUrl;
                    bool m_evidenceUrlHasBeenSet;

                    /**
                     * 存证证书生效日期
                     */
                    std::string m_evidenceStartTime;
                    bool m_evidenceStartTimeHasBeenSet;

                    /**
                     * 存证证书截止日期
                     */
                    std::string m_evidenceEndTime;
                    bool m_evidenceEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_DESCRIBECRWORKINFORESPONSE_H_
