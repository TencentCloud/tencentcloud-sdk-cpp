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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_RUNTESTOTAVERSIONREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_RUNTESTOTAVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * RunTestOtaVersion请求参数结构体
                */
                class RunTestOtaVersionRequest : public AbstractModel
                {
                public:
                    RunTestOtaVersionRequest();
                    ~RunTestOtaVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取固件版本号，格式为x.y.z， x，y 范围0-63，z范围1~524288
                     * @return OtaVersion 固件版本号，格式为x.y.z， x，y 范围0-63，z范围1~524288
                     * 
                     */
                    std::string GetOtaVersion() const;

                    /**
                     * 设置固件版本号，格式为x.y.z， x，y 范围0-63，z范围1~524288
                     * @param _otaVersion 固件版本号，格式为x.y.z， x，y 范围0-63，z范围1~524288
                     * 
                     */
                    void SetOtaVersion(const std::string& _otaVersion);

                    /**
                     * 判断参数 OtaVersion 是否已赋值
                     * @return OtaVersion 是否已赋值
                     * 
                     */
                    bool OtaVersionHasBeenSet() const;

                    /**
                     * 获取指定可升级的设备TID
                     * @return Tids 指定可升级的设备TID
                     * 
                     */
                    std::vector<std::string> GetTids() const;

                    /**
                     * 设置指定可升级的设备TID
                     * @param _tids 指定可升级的设备TID
                     * 
                     */
                    void SetTids(const std::vector<std::string>& _tids);

                    /**
                     * 判断参数 Tids 是否已赋值
                     * @return Tids 是否已赋值
                     * 
                     */
                    bool TidsHasBeenSet() const;

                    /**
                     * 获取操作人
                     * @return Operator 操作人
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作人
                     * @param _operator 操作人
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取备注信息
                     * @return Remark 备注信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息
                     * @param _remark 备注信息
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 固件版本号，格式为x.y.z， x，y 范围0-63，z范围1~524288
                     */
                    std::string m_otaVersion;
                    bool m_otaVersionHasBeenSet;

                    /**
                     * 指定可升级的设备TID
                     */
                    std::vector<std::string> m_tids;
                    bool m_tidsHasBeenSet;

                    /**
                     * 操作人
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_RUNTESTOTAVERSIONREQUEST_H_
