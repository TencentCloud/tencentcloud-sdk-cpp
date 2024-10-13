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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_GETUSERQUOTAINFORESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_GETUSERQUOTAINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * GetUserQuotaInfo返回参数结构体
                */
                class GetUserQuotaInfoResponse : public AbstractModel
                {
                public:
                    GetUserQuotaInfoResponse();
                    ~GetUserQuotaInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例ID。
                     * @return DspaId DSPA实例ID。
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取用户购买的DB配额。
                     * @return DbTotalQuota 用户购买的DB配额。
                     * 
                     */
                    int64_t GetDbTotalQuota() const;

                    /**
                     * 判断参数 DbTotalQuota 是否已赋值
                     * @return DbTotalQuota 是否已赋值
                     * 
                     */
                    bool DbTotalQuotaHasBeenSet() const;

                    /**
                     * 获取用户购买的COS存储量配额。
                     * @return CosTotalQuota 用户购买的COS存储量配额。
                     * 
                     */
                    int64_t GetCosTotalQuota() const;

                    /**
                     * 判断参数 CosTotalQuota 是否已赋值
                     * @return CosTotalQuota 是否已赋值
                     * 
                     */
                    bool CosTotalQuotaHasBeenSet() const;

                    /**
                     * 获取用户可用的DB配额。
                     * @return DbRemainQuota 用户可用的DB配额。
                     * 
                     */
                    int64_t GetDbRemainQuota() const;

                    /**
                     * 判断参数 DbRemainQuota 是否已赋值
                     * @return DbRemainQuota 是否已赋值
                     * 
                     */
                    bool DbRemainQuotaHasBeenSet() const;

                    /**
                     * 获取用户可用的COS存储量配额。
                     * @return CosRemainQuota 用户可用的COS存储量配额。
                     * 
                     */
                    double GetCosRemainQuota() const;

                    /**
                     * 判断参数 CosRemainQuota 是否已赋值
                     * @return CosRemainQuota 是否已赋值
                     * 
                     */
                    bool CosRemainQuotaHasBeenSet() const;

                    /**
                     * 获取COS存储量单位，例如TB。
                     * @return CosQuotaUnit COS存储量单位，例如TB。
                     * 
                     */
                    std::string GetCosQuotaUnit() const;

                    /**
                     * 判断参数 CosQuotaUnit 是否已赋值
                     * @return CosQuotaUnit 是否已赋值
                     * 
                     */
                    bool CosQuotaUnitHasBeenSet() const;

                    /**
                     * 获取db月解绑次数
                     * @return DBUnbindNum db月解绑次数
                     * 
                     */
                    int64_t GetDBUnbindNum() const;

                    /**
                     * 判断参数 DBUnbindNum 是否已赋值
                     * @return DBUnbindNum 是否已赋值
                     * 
                     */
                    bool DBUnbindNumHasBeenSet() const;

                    /**
                     * 获取cos月解绑次数
                     * @return COSUnbindNum cos月解绑次数
                     * 
                     */
                    int64_t GetCOSUnbindNum() const;

                    /**
                     * 判断参数 COSUnbindNum 是否已赋值
                     * @return COSUnbindNum 是否已赋值
                     * 
                     */
                    bool COSUnbindNumHasBeenSet() const;

                    /**
                     * 获取用户购买的实例配额。
                     * @return InsTotalQuota 用户购买的实例配额。
                     * 
                     */
                    int64_t GetInsTotalQuota() const;

                    /**
                     * 判断参数 InsTotalQuota 是否已赋值
                     * @return InsTotalQuota 是否已赋值
                     * 
                     */
                    bool InsTotalQuotaHasBeenSet() const;

                    /**
                     * 获取用户可用的实例配额。
                     * @return InsRemainQuota 用户可用的实例配额。
                     * 
                     */
                    int64_t GetInsRemainQuota() const;

                    /**
                     * 判断参数 InsRemainQuota 是否已赋值
                     * @return InsRemainQuota 是否已赋值
                     * 
                     */
                    bool InsRemainQuotaHasBeenSet() const;

                    /**
                     * 获取用户购买的版本
                     * @return Version 用户购买的版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * DSPA实例ID。
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 用户购买的DB配额。
                     */
                    int64_t m_dbTotalQuota;
                    bool m_dbTotalQuotaHasBeenSet;

                    /**
                     * 用户购买的COS存储量配额。
                     */
                    int64_t m_cosTotalQuota;
                    bool m_cosTotalQuotaHasBeenSet;

                    /**
                     * 用户可用的DB配额。
                     */
                    int64_t m_dbRemainQuota;
                    bool m_dbRemainQuotaHasBeenSet;

                    /**
                     * 用户可用的COS存储量配额。
                     */
                    double m_cosRemainQuota;
                    bool m_cosRemainQuotaHasBeenSet;

                    /**
                     * COS存储量单位，例如TB。
                     */
                    std::string m_cosQuotaUnit;
                    bool m_cosQuotaUnitHasBeenSet;

                    /**
                     * db月解绑次数
                     */
                    int64_t m_dBUnbindNum;
                    bool m_dBUnbindNumHasBeenSet;

                    /**
                     * cos月解绑次数
                     */
                    int64_t m_cOSUnbindNum;
                    bool m_cOSUnbindNumHasBeenSet;

                    /**
                     * 用户购买的实例配额。
                     */
                    int64_t m_insTotalQuota;
                    bool m_insTotalQuotaHasBeenSet;

                    /**
                     * 用户可用的实例配额。
                     */
                    int64_t m_insRemainQuota;
                    bool m_insRemainQuotaHasBeenSet;

                    /**
                     * 用户购买的版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_GETUSERQUOTAINFORESPONSE_H_
