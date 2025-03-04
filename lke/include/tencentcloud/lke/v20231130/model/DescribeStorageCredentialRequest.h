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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBESTORAGECREDENTIALREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBESTORAGECREDENTIALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeStorageCredential请求参数结构体
                */
                class DescribeStorageCredentialRequest : public AbstractModel
                {
                public:
                    DescribeStorageCredentialRequest();
                    ~DescribeStorageCredentialRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID，参数非必填不代表不需要填写，下面不同的参数组合会获取到不同的权限，具体请参考 https://cloud.tencent.com/document/product/1759/116238
                     * @return BotBizId 应用ID，参数非必填不代表不需要填写，下面不同的参数组合会获取到不同的权限，具体请参考 https://cloud.tencent.com/document/product/1759/116238
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置应用ID，参数非必填不代表不需要填写，下面不同的参数组合会获取到不同的权限，具体请参考 https://cloud.tencent.com/document/product/1759/116238
                     * @param _botBizId 应用ID，参数非必填不代表不需要填写，下面不同的参数组合会获取到不同的权限，具体请参考 https://cloud.tencent.com/document/product/1759/116238
                     * 
                     */
                    void SetBotBizId(const std::string& _botBizId);

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * 
                     */
                    bool BotBizIdHasBeenSet() const;

                    /**
                     * 获取文件类型,正常的文件名类型后缀，例如 xlsx、pdf、 docx、png 等
                     * @return FileType 文件类型,正常的文件名类型后缀，例如 xlsx、pdf、 docx、png 等
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型,正常的文件名类型后缀，例如 xlsx、pdf、 docx、png 等
                     * @param _fileType 文件类型,正常的文件名类型后缀，例如 xlsx、pdf、 docx、png 等
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取IsPublic用于上传文件或图片时选择场景，当上传对话端图片时IsPublic为true，上传文件（包括文档库文件/图片等和对话端文件）时IsPublic为false

                     * @return IsPublic IsPublic用于上传文件或图片时选择场景，当上传对话端图片时IsPublic为true，上传文件（包括文档库文件/图片等和对话端文件）时IsPublic为false

                     * 
                     */
                    bool GetIsPublic() const;

                    /**
                     * 设置IsPublic用于上传文件或图片时选择场景，当上传对话端图片时IsPublic为true，上传文件（包括文档库文件/图片等和对话端文件）时IsPublic为false

                     * @param _isPublic IsPublic用于上传文件或图片时选择场景，当上传对话端图片时IsPublic为true，上传文件（包括文档库文件/图片等和对话端文件）时IsPublic为false

                     * 
                     */
                    void SetIsPublic(const bool& _isPublic);

                    /**
                     * 判断参数 IsPublic 是否已赋值
                     * @return IsPublic 是否已赋值
                     * 
                     */
                    bool IsPublicHasBeenSet() const;

                    /**
                     * 获取存储类型: offline:离线文件，realtime:实时文件；为空默认为offline
                     * @return TypeKey 存储类型: offline:离线文件，realtime:实时文件；为空默认为offline
                     * 
                     */
                    std::string GetTypeKey() const;

                    /**
                     * 设置存储类型: offline:离线文件，realtime:实时文件；为空默认为offline
                     * @param _typeKey 存储类型: offline:离线文件，realtime:实时文件；为空默认为offline
                     * 
                     */
                    void SetTypeKey(const std::string& _typeKey);

                    /**
                     * 判断参数 TypeKey 是否已赋值
                     * @return TypeKey 是否已赋值
                     * 
                     */
                    bool TypeKeyHasBeenSet() const;

                private:

                    /**
                     * 应用ID，参数非必填不代表不需要填写，下面不同的参数组合会获取到不同的权限，具体请参考 https://cloud.tencent.com/document/product/1759/116238
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * 文件类型,正常的文件名类型后缀，例如 xlsx、pdf、 docx、png 等
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * IsPublic用于上传文件或图片时选择场景，当上传对话端图片时IsPublic为true，上传文件（包括文档库文件/图片等和对话端文件）时IsPublic为false

                     */
                    bool m_isPublic;
                    bool m_isPublicHasBeenSet;

                    /**
                     * 存储类型: offline:离线文件，realtime:实时文件；为空默认为offline
                     */
                    std::string m_typeKey;
                    bool m_typeKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBESTORAGECREDENTIALREQUEST_H_
