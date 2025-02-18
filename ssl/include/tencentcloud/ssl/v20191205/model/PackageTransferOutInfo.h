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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_PACKAGETRANSFEROUTINFO_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_PACKAGETRANSFEROUTINFO_H_

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
                * 权益包转出详情
                */
                class PackageTransferOutInfo : public AbstractModel
                {
                public:
                    PackageTransferOutInfo();
                    ~PackageTransferOutInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取权益包ID。
                     * @return PackageId 权益包ID。
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置权益包ID。
                     * @param _packageId 权益包ID。
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取转移码。
                     * @return TransferCode 转移码。
                     * 
                     */
                    std::string GetTransferCode() const;

                    /**
                     * 设置转移码。
                     * @param _transferCode 转移码。
                     * 
                     */
                    void SetTransferCode(const std::string& _transferCode);

                    /**
                     * 判断参数 TransferCode 是否已赋值
                     * @return TransferCode 是否已赋值
                     * 
                     */
                    bool TransferCodeHasBeenSet() const;

                    /**
                     * 获取本次转移点数。
                     * @return TransferCount 本次转移点数。
                     * 
                     */
                    uint64_t GetTransferCount() const;

                    /**
                     * 设置本次转移点数。
                     * @param _transferCount 本次转移点数。
                     * 
                     */
                    void SetTransferCount(const uint64_t& _transferCount);

                    /**
                     * 判断参数 TransferCount 是否已赋值
                     * @return TransferCount 是否已赋值
                     * 
                     */
                    bool TransferCountHasBeenSet() const;

                    /**
                     * 获取转入的PackageID。
                     * @return ReceivePackageId 转入的PackageID。
                     * 
                     */
                    std::string GetReceivePackageId() const;

                    /**
                     * 设置转入的PackageID。
                     * @param _receivePackageId 转入的PackageID。
                     * 
                     */
                    void SetReceivePackageId(const std::string& _receivePackageId);

                    /**
                     * 判断参数 ReceivePackageId 是否已赋值
                     * @return ReceivePackageId 是否已赋值
                     * 
                     */
                    bool ReceivePackageIdHasBeenSet() const;

                    /**
                     * 获取本次转移过期时间。
                     * @return ExpireTime 本次转移过期时间。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置本次转移过期时间。
                     * @param _expireTime 本次转移过期时间。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取本次转移生成时间。
                     * @return CreateTime 本次转移生成时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置本次转移生成时间。
                     * @param _createTime 本次转移生成时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取本次转移更新时间。
                     * @return UpdateTime 本次转移更新时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置本次转移更新时间。
                     * @param _updateTime 本次转移更新时间。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取转移状态。
                     * @return TransferStatus 转移状态。
                     * 
                     */
                    std::string GetTransferStatus() const;

                    /**
                     * 设置转移状态。
                     * @param _transferStatus 转移状态。
                     * 
                     */
                    void SetTransferStatus(const std::string& _transferStatus);

                    /**
                     * 判断参数 TransferStatus 是否已赋值
                     * @return TransferStatus 是否已赋值
                     * 
                     */
                    bool TransferStatusHasBeenSet() const;

                    /**
                     * 获取接收者uin。
                     * @return ReceiverUin 接收者uin。
                     * 
                     */
                    uint64_t GetReceiverUin() const;

                    /**
                     * 设置接收者uin。
                     * @param _receiverUin 接收者uin。
                     * 
                     */
                    void SetReceiverUin(const uint64_t& _receiverUin);

                    /**
                     * 判断参数 ReceiverUin 是否已赋值
                     * @return ReceiverUin 是否已赋值
                     * 
                     */
                    bool ReceiverUinHasBeenSet() const;

                    /**
                     * 获取接收时间。
                     * @return ReceiveTime 接收时间。
                     * 
                     */
                    std::string GetReceiveTime() const;

                    /**
                     * 设置接收时间。
                     * @param _receiveTime 接收时间。
                     * 
                     */
                    void SetReceiveTime(const std::string& _receiveTime);

                    /**
                     * 判断参数 ReceiveTime 是否已赋值
                     * @return ReceiveTime 是否已赋值
                     * 
                     */
                    bool ReceiveTimeHasBeenSet() const;

                private:

                    /**
                     * 权益包ID。
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 转移码。
                     */
                    std::string m_transferCode;
                    bool m_transferCodeHasBeenSet;

                    /**
                     * 本次转移点数。
                     */
                    uint64_t m_transferCount;
                    bool m_transferCountHasBeenSet;

                    /**
                     * 转入的PackageID。
                     */
                    std::string m_receivePackageId;
                    bool m_receivePackageIdHasBeenSet;

                    /**
                     * 本次转移过期时间。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 本次转移生成时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 本次转移更新时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 转移状态。
                     */
                    std::string m_transferStatus;
                    bool m_transferStatusHasBeenSet;

                    /**
                     * 接收者uin。
                     */
                    uint64_t m_receiverUin;
                    bool m_receiverUinHasBeenSet;

                    /**
                     * 接收时间。
                     */
                    std::string m_receiveTime;
                    bool m_receiveTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_PACKAGETRANSFEROUTINFO_H_
