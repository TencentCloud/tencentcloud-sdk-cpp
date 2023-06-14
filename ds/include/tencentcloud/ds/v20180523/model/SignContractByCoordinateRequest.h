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

#ifndef TENCENTCLOUD_DS_V20180523_MODEL_SIGNCONTRACTBYCOORDINATEREQUEST_H_
#define TENCENTCLOUD_DS_V20180523_MODEL_SIGNCONTRACTBYCOORDINATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ds/v20180523/model/SignLocation.h>


namespace TencentCloud
{
    namespace Ds
    {
        namespace V20180523
        {
            namespace Model
            {
                /**
                * SignContractByCoordinate请求参数结构体
                */
                class SignContractByCoordinateRequest : public AbstractModel
                {
                public:
                    SignContractByCoordinateRequest();
                    ~SignContractByCoordinateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块名ContractMng
                     * @return Module 模块名ContractMng
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名ContractMng
                     * @param _module 模块名ContractMng
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取操作名SignContractByCoordinate
                     * @return Operation 操作名SignContractByCoordinate
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作名SignContractByCoordinate
                     * @param _operation 操作名SignContractByCoordinate
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取合同ID
                     * @return ContractResId 合同ID
                     * 
                     */
                    std::string GetContractResId() const;

                    /**
                     * 设置合同ID
                     * @param _contractResId 合同ID
                     * 
                     */
                    void SetContractResId(const std::string& _contractResId);

                    /**
                     * 判断参数 ContractResId 是否已赋值
                     * @return ContractResId 是否已赋值
                     * 
                     */
                    bool ContractResIdHasBeenSet() const;

                    /**
                     * 获取帐户ID
                     * @return AccountResId 帐户ID
                     * 
                     */
                    std::string GetAccountResId() const;

                    /**
                     * 设置帐户ID
                     * @param _accountResId 帐户ID
                     * 
                     */
                    void SetAccountResId(const std::string& _accountResId);

                    /**
                     * 判断参数 AccountResId 是否已赋值
                     * @return AccountResId 是否已赋值
                     * 
                     */
                    bool AccountResIdHasBeenSet() const;

                    /**
                     * 获取签署坐标，坐标原点在文件左下角，坐标单位为磅，坐标不得超过合同文件边界
                     * @return SignLocations 签署坐标，坐标原点在文件左下角，坐标单位为磅，坐标不得超过合同文件边界
                     * 
                     */
                    std::vector<SignLocation> GetSignLocations() const;

                    /**
                     * 设置签署坐标，坐标原点在文件左下角，坐标单位为磅，坐标不得超过合同文件边界
                     * @param _signLocations 签署坐标，坐标原点在文件左下角，坐标单位为磅，坐标不得超过合同文件边界
                     * 
                     */
                    void SetSignLocations(const std::vector<SignLocation>& _signLocations);

                    /**
                     * 判断参数 SignLocations 是否已赋值
                     * @return SignLocations 是否已赋值
                     * 
                     */
                    bool SignLocationsHasBeenSet() const;

                    /**
                     * 获取授权时间（由平台自动填充）
                     * @return AuthorizationTime 授权时间（由平台自动填充）
                     * 
                     */
                    std::string GetAuthorizationTime() const;

                    /**
                     * 设置授权时间（由平台自动填充）
                     * @param _authorizationTime 授权时间（由平台自动填充）
                     * 
                     */
                    void SetAuthorizationTime(const std::string& _authorizationTime);

                    /**
                     * 判断参数 AuthorizationTime 是否已赋值
                     * @return AuthorizationTime 是否已赋值
                     * 
                     */
                    bool AuthorizationTimeHasBeenSet() const;

                    /**
                     * 获取授权IP地址（由平台自动填充）
                     * @return Position 授权IP地址（由平台自动填充）
                     * 
                     */
                    std::string GetPosition() const;

                    /**
                     * 设置授权IP地址（由平台自动填充）
                     * @param _position 授权IP地址（由平台自动填充）
                     * 
                     */
                    void SetPosition(const std::string& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取签章ID
                     * @return SealResId 签章ID
                     * 
                     */
                    std::string GetSealResId() const;

                    /**
                     * 设置签章ID
                     * @param _sealResId 签章ID
                     * 
                     */
                    void SetSealResId(const std::string& _sealResId);

                    /**
                     * 判断参数 SealResId 是否已赋值
                     * @return SealResId 是否已赋值
                     * 
                     */
                    bool SealResIdHasBeenSet() const;

                    /**
                     * 获取选用证书类型：1  表示RSA证书， 2 表示国密证书， 参数不传时默认为1
                     * @return CertType 选用证书类型：1  表示RSA证书， 2 表示国密证书， 参数不传时默认为1
                     * 
                     */
                    int64_t GetCertType() const;

                    /**
                     * 设置选用证书类型：1  表示RSA证书， 2 表示国密证书， 参数不传时默认为1
                     * @param _certType 选用证书类型：1  表示RSA证书， 2 表示国密证书， 参数不传时默认为1
                     * 
                     */
                    void SetCertType(const int64_t& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取签名图片，base64编码
                     * @return ImageData 签名图片，base64编码
                     * 
                     */
                    std::string GetImageData() const;

                    /**
                     * 设置签名图片，base64编码
                     * @param _imageData 签名图片，base64编码
                     * 
                     */
                    void SetImageData(const std::string& _imageData);

                    /**
                     * 判断参数 ImageData 是否已赋值
                     * @return ImageData 是否已赋值
                     * 
                     */
                    bool ImageDataHasBeenSet() const;

                private:

                    /**
                     * 模块名ContractMng
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作名SignContractByCoordinate
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 合同ID
                     */
                    std::string m_contractResId;
                    bool m_contractResIdHasBeenSet;

                    /**
                     * 帐户ID
                     */
                    std::string m_accountResId;
                    bool m_accountResIdHasBeenSet;

                    /**
                     * 签署坐标，坐标原点在文件左下角，坐标单位为磅，坐标不得超过合同文件边界
                     */
                    std::vector<SignLocation> m_signLocations;
                    bool m_signLocationsHasBeenSet;

                    /**
                     * 授权时间（由平台自动填充）
                     */
                    std::string m_authorizationTime;
                    bool m_authorizationTimeHasBeenSet;

                    /**
                     * 授权IP地址（由平台自动填充）
                     */
                    std::string m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * 签章ID
                     */
                    std::string m_sealResId;
                    bool m_sealResIdHasBeenSet;

                    /**
                     * 选用证书类型：1  表示RSA证书， 2 表示国密证书， 参数不传时默认为1
                     */
                    int64_t m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * 签名图片，base64编码
                     */
                    std::string m_imageData;
                    bool m_imageDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DS_V20180523_MODEL_SIGNCONTRACTBYCOORDINATEREQUEST_H_
