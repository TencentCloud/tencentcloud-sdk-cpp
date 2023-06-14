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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATESEALREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATESEALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/Caller.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * CreateSeal请求参数结构体
                */
                class CreateSealRequest : public AbstractModel
                {
                public:
                    CreateSealRequest();
                    ~CreateSealRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方信息
                     * @return Caller 调用方信息
                     * 
                     */
                    Caller GetCaller() const;

                    /**
                     * 设置调用方信息
                     * @param _caller 调用方信息
                     * 
                     */
                    void SetCaller(const Caller& _caller);

                    /**
                     * 判断参数 Caller 是否已赋值
                     * @return Caller 是否已赋值
                     * 
                     */
                    bool CallerHasBeenSet() const;

                    /**
                     * 获取印章类型：
1. PERSONAL - 个人私章
2. OFFICIAL - 公章
3. SPECIAL_FINANCIAL - 财务专用章
4. CONTRACT - 合同专用章
5. LEGAL_REPRESENTATIVE - 法定代表人章
6. SPECIAL_NATIONWIDE_INVOICE - 发票专用章
7. OTHER-其他
                     * @return SealType 印章类型：
1. PERSONAL - 个人私章
2. OFFICIAL - 公章
3. SPECIAL_FINANCIAL - 财务专用章
4. CONTRACT - 合同专用章
5. LEGAL_REPRESENTATIVE - 法定代表人章
6. SPECIAL_NATIONWIDE_INVOICE - 发票专用章
7. OTHER-其他
                     * 
                     */
                    std::string GetSealType() const;

                    /**
                     * 设置印章类型：
1. PERSONAL - 个人私章
2. OFFICIAL - 公章
3. SPECIAL_FINANCIAL - 财务专用章
4. CONTRACT - 合同专用章
5. LEGAL_REPRESENTATIVE - 法定代表人章
6. SPECIAL_NATIONWIDE_INVOICE - 发票专用章
7. OTHER-其他
                     * @param _sealType 印章类型：
1. PERSONAL - 个人私章
2. OFFICIAL - 公章
3. SPECIAL_FINANCIAL - 财务专用章
4. CONTRACT - 合同专用章
5. LEGAL_REPRESENTATIVE - 法定代表人章
6. SPECIAL_NATIONWIDE_INVOICE - 发票专用章
7. OTHER-其他
                     * 
                     */
                    void SetSealType(const std::string& _sealType);

                    /**
                     * 判断参数 SealType 是否已赋值
                     * @return SealType 是否已赋值
                     * 
                     */
                    bool SealTypeHasBeenSet() const;

                    /**
                     * 获取印章名称
                     * @return SealName 印章名称
                     * 
                     */
                    std::string GetSealName() const;

                    /**
                     * 设置印章名称
                     * @param _sealName 印章名称
                     * 
                     */
                    void SetSealName(const std::string& _sealName);

                    /**
                     * 判断参数 SealName 是否已赋值
                     * @return SealName 是否已赋值
                     * 
                     */
                    bool SealNameHasBeenSet() const;

                    /**
                     * 获取请求创建印章的客户端IP
                     * @return SourceIp 请求创建印章的客户端IP
                     * 
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置请求创建印章的客户端IP
                     * @param _sourceIp 请求创建印章的客户端IP
                     * 
                     */
                    void SetSourceIp(const std::string& _sourceIp);

                    /**
                     * 判断参数 SourceIp 是否已赋值
                     * @return SourceIp 是否已赋值
                     * 
                     */
                    bool SourceIpHasBeenSet() const;

                    /**
                     * 获取印章图片，base64编码（与FileId参数二选一，同时传入参数时优先使用Image参数）
                     * @return Image 印章图片，base64编码（与FileId参数二选一，同时传入参数时优先使用Image参数）
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置印章图片，base64编码（与FileId参数二选一，同时传入参数时优先使用Image参数）
                     * @param _image 印章图片，base64编码（与FileId参数二选一，同时传入参数时优先使用Image参数）
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取印章文件图片ID（与Image参数二选一，同时传入参数时优先使用Image参数）
                     * @return FileId 印章文件图片ID（与Image参数二选一，同时传入参数时优先使用Image参数）
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置印章文件图片ID（与Image参数二选一，同时传入参数时优先使用Image参数）
                     * @param _fileId 印章文件图片ID（与Image参数二选一，同时传入参数时优先使用Image参数）
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取需要创建印章的用户ID
                     * @return UserId 需要创建印章的用户ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置需要创建印章的用户ID
                     * @param _userId 需要创建印章的用户ID
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取是否是默认印章 true：是，false：否
                     * @return IsDefault 是否是默认印章 true：是，false：否
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置是否是默认印章 true：是，false：否
                     * @param _isDefault 是否是默认印章 true：是，false：否
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                private:

                    /**
                     * 调用方信息
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 印章类型：
1. PERSONAL - 个人私章
2. OFFICIAL - 公章
3. SPECIAL_FINANCIAL - 财务专用章
4. CONTRACT - 合同专用章
5. LEGAL_REPRESENTATIVE - 法定代表人章
6. SPECIAL_NATIONWIDE_INVOICE - 发票专用章
7. OTHER-其他
                     */
                    std::string m_sealType;
                    bool m_sealTypeHasBeenSet;

                    /**
                     * 印章名称
                     */
                    std::string m_sealName;
                    bool m_sealNameHasBeenSet;

                    /**
                     * 请求创建印章的客户端IP
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                    /**
                     * 印章图片，base64编码（与FileId参数二选一，同时传入参数时优先使用Image参数）
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 印章文件图片ID（与Image参数二选一，同时传入参数时优先使用Image参数）
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 需要创建印章的用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 是否是默认印章 true：是，false：否
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATESEALREQUEST_H_
