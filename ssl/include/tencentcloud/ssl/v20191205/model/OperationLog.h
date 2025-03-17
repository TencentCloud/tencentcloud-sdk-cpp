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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_OPERATIONLOG_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_OPERATIONLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 证书操作日志。
                */
                class OperationLog : public AbstractModel
                {
                public:
                    OperationLog();
                    ~OperationLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作证书动作。
                     * @return Action 操作证书动作。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置操作证书动作。
                     * @param _action 操作证书动作。
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取操作时间。
                     * @return CreatedOn 操作时间。
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置操作时间。
                     * @param _createdOn 操作时间。
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取主账号
                     * @return Uin 主账号
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置主账号
                     * @param _uin 主账号
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取子账号
                     * @return SubAccountUin 子账号
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置子账号
                     * @param _subAccountUin 子账号
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取证书ID
                     * @return CertId 证书ID
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置证书ID
                     * @param _certId 证书ID
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取每个操作类型都对应一个具体的操作描述。以下是对每个操作类型及其描述的文字说明：
1. apply - 表示申请一个免费的证书。
2. delete - 表示删除操作。
3. download - 表示下载操作。
4. upload - 表示上传操作。
5. revoke - 表示吊销证书。
6. cancelRevoke - 表示取消吊销操作。
7. updateAlias - 表示更新备注信息。
8. changeProject - 表示将证书分配到某个项目。
9. uploadConfirmLetter - 表示上传确认函。
10. cancel - 表示取消订单操作。
11. replace - 表示重颁发证书。
12. downloadConfirmLetter - 表示下载证书吊销确认函。
13. editRevokeLetter - 表示上传证书吊销确认函。
14. renewVIP - 表示续费付费证书。
15. applyVIP - 表示申请付费证书。
16. submitInfo - 表示提交资料。
17. downloadConfirmLetter - 表示下载确认函模版。
18. uploadFromYunAPI - 表示通过云 API 上传。
19. transferIn - 表示证书转入操作。
20. transferOut - 表示证书转出操作。
21. refund - 表示申请退款。
22. multiYearsRenew - 表示多年期自动续期。
23. modifyDownloadLimit - 表示修改下载限制开关。
24. issued - 表示证书签发。
25. domainValidationPassed - 表示域名验证完成。
26. Resubmit - 表示证书重新申请。
                     * @return Type 每个操作类型都对应一个具体的操作描述。以下是对每个操作类型及其描述的文字说明：
1. apply - 表示申请一个免费的证书。
2. delete - 表示删除操作。
3. download - 表示下载操作。
4. upload - 表示上传操作。
5. revoke - 表示吊销证书。
6. cancelRevoke - 表示取消吊销操作。
7. updateAlias - 表示更新备注信息。
8. changeProject - 表示将证书分配到某个项目。
9. uploadConfirmLetter - 表示上传确认函。
10. cancel - 表示取消订单操作。
11. replace - 表示重颁发证书。
12. downloadConfirmLetter - 表示下载证书吊销确认函。
13. editRevokeLetter - 表示上传证书吊销确认函。
14. renewVIP - 表示续费付费证书。
15. applyVIP - 表示申请付费证书。
16. submitInfo - 表示提交资料。
17. downloadConfirmLetter - 表示下载确认函模版。
18. uploadFromYunAPI - 表示通过云 API 上传。
19. transferIn - 表示证书转入操作。
20. transferOut - 表示证书转出操作。
21. refund - 表示申请退款。
22. multiYearsRenew - 表示多年期自动续期。
23. modifyDownloadLimit - 表示修改下载限制开关。
24. issued - 表示证书签发。
25. domainValidationPassed - 表示域名验证完成。
26. Resubmit - 表示证书重新申请。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置每个操作类型都对应一个具体的操作描述。以下是对每个操作类型及其描述的文字说明：
1. apply - 表示申请一个免费的证书。
2. delete - 表示删除操作。
3. download - 表示下载操作。
4. upload - 表示上传操作。
5. revoke - 表示吊销证书。
6. cancelRevoke - 表示取消吊销操作。
7. updateAlias - 表示更新备注信息。
8. changeProject - 表示将证书分配到某个项目。
9. uploadConfirmLetter - 表示上传确认函。
10. cancel - 表示取消订单操作。
11. replace - 表示重颁发证书。
12. downloadConfirmLetter - 表示下载证书吊销确认函。
13. editRevokeLetter - 表示上传证书吊销确认函。
14. renewVIP - 表示续费付费证书。
15. applyVIP - 表示申请付费证书。
16. submitInfo - 表示提交资料。
17. downloadConfirmLetter - 表示下载确认函模版。
18. uploadFromYunAPI - 表示通过云 API 上传。
19. transferIn - 表示证书转入操作。
20. transferOut - 表示证书转出操作。
21. refund - 表示申请退款。
22. multiYearsRenew - 表示多年期自动续期。
23. modifyDownloadLimit - 表示修改下载限制开关。
24. issued - 表示证书签发。
25. domainValidationPassed - 表示域名验证完成。
26. Resubmit - 表示证书重新申请。
                     * @param _type 每个操作类型都对应一个具体的操作描述。以下是对每个操作类型及其描述的文字说明：
1. apply - 表示申请一个免费的证书。
2. delete - 表示删除操作。
3. download - 表示下载操作。
4. upload - 表示上传操作。
5. revoke - 表示吊销证书。
6. cancelRevoke - 表示取消吊销操作。
7. updateAlias - 表示更新备注信息。
8. changeProject - 表示将证书分配到某个项目。
9. uploadConfirmLetter - 表示上传确认函。
10. cancel - 表示取消订单操作。
11. replace - 表示重颁发证书。
12. downloadConfirmLetter - 表示下载证书吊销确认函。
13. editRevokeLetter - 表示上传证书吊销确认函。
14. renewVIP - 表示续费付费证书。
15. applyVIP - 表示申请付费证书。
16. submitInfo - 表示提交资料。
17. downloadConfirmLetter - 表示下载确认函模版。
18. uploadFromYunAPI - 表示通过云 API 上传。
19. transferIn - 表示证书转入操作。
20. transferOut - 表示证书转出操作。
21. refund - 表示申请退款。
22. multiYearsRenew - 表示多年期自动续期。
23. modifyDownloadLimit - 表示修改下载限制开关。
24. issued - 表示证书签发。
25. domainValidationPassed - 表示域名验证完成。
26. Resubmit - 表示证书重新申请。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 操作证书动作。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 操作时间。
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 主账号
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 子账号
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * 证书ID
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 每个操作类型都对应一个具体的操作描述。以下是对每个操作类型及其描述的文字说明：
1. apply - 表示申请一个免费的证书。
2. delete - 表示删除操作。
3. download - 表示下载操作。
4. upload - 表示上传操作。
5. revoke - 表示吊销证书。
6. cancelRevoke - 表示取消吊销操作。
7. updateAlias - 表示更新备注信息。
8. changeProject - 表示将证书分配到某个项目。
9. uploadConfirmLetter - 表示上传确认函。
10. cancel - 表示取消订单操作。
11. replace - 表示重颁发证书。
12. downloadConfirmLetter - 表示下载证书吊销确认函。
13. editRevokeLetter - 表示上传证书吊销确认函。
14. renewVIP - 表示续费付费证书。
15. applyVIP - 表示申请付费证书。
16. submitInfo - 表示提交资料。
17. downloadConfirmLetter - 表示下载确认函模版。
18. uploadFromYunAPI - 表示通过云 API 上传。
19. transferIn - 表示证书转入操作。
20. transferOut - 表示证书转出操作。
21. refund - 表示申请退款。
22. multiYearsRenew - 表示多年期自动续期。
23. modifyDownloadLimit - 表示修改下载限制开关。
24. issued - 表示证书签发。
25. domainValidationPassed - 表示域名验证完成。
26. Resubmit - 表示证书重新申请。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_OPERATIONLOG_H_
