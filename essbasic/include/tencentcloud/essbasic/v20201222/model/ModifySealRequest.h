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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_MODIFYSEALREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_MODIFYSEALREQUEST_H_

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
                * ModifySeal请求参数结构体
                */
                class ModifySealRequest : public AbstractModel
                {
                public:
                    ModifySealRequest();
                    ~ModifySealRequest() = default;
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
                     * 获取请求更新印章的客户端IP
                     * @return SourceIp 请求更新印章的客户端IP
                     * 
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置请求更新印章的客户端IP
                     * @param _sourceIp 请求更新印章的客户端IP
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
                     * 获取电子印章ID。若为空，则修改个人/机构的默认印章。
                     * @return SealId 电子印章ID。若为空，则修改个人/机构的默认印章。
                     * 
                     */
                    std::string GetSealId() const;

                    /**
                     * 设置电子印章ID。若为空，则修改个人/机构的默认印章。
                     * @param _sealId 电子印章ID。若为空，则修改个人/机构的默认印章。
                     * 
                     */
                    void SetSealId(const std::string& _sealId);

                    /**
                     * 判断参数 SealId 是否已赋值
                     * @return SealId 是否已赋值
                     * 
                     */
                    bool SealIdHasBeenSet() const;

                    /**
                     * 获取电子印章名称
                     * @return SealName 电子印章名称
                     * 
                     */
                    std::string GetSealName() const;

                    /**
                     * 设置电子印章名称
                     * @param _sealName 电子印章名称
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
                     * 获取印章图片文件ID（与Image参数二选一，同时传入参数时优先使用Image参数）
                     * @return FileId 印章图片文件ID（与Image参数二选一，同时传入参数时优先使用Image参数）
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置印章图片文件ID（与Image参数二选一，同时传入参数时优先使用Image参数）
                     * @param _fileId 印章图片文件ID（与Image参数二选一，同时传入参数时优先使用Image参数）
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
                     * 获取需要更新印章的用户ID
                     * @return UserId 需要更新印章的用户ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置需要更新印章的用户ID
                     * @param _userId 需要更新印章的用户ID
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * 调用方信息
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 请求更新印章的客户端IP
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                    /**
                     * 电子印章ID。若为空，则修改个人/机构的默认印章。
                     */
                    std::string m_sealId;
                    bool m_sealIdHasBeenSet;

                    /**
                     * 电子印章名称
                     */
                    std::string m_sealName;
                    bool m_sealNameHasBeenSet;

                    /**
                     * 印章图片，base64编码（与FileId参数二选一，同时传入参数时优先使用Image参数）
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 印章图片文件ID（与Image参数二选一，同时传入参数时优先使用Image参数）
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 需要更新印章的用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_MODIFYSEALREQUEST_H_
