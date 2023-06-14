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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_SEAL_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_SEAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/Caller.h>
#include <tencentcloud/essbasic/v20201222/model/FileUrl.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * 此结构体 (Seal) 用于描述电子印章的信息。
                */
                class Seal : public AbstractModel
                {
                public:
                    Seal();
                    ~Seal() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取电子印章ID
                     * @return SealId 电子印章ID
                     * 
                     */
                    std::string GetSealId() const;

                    /**
                     * 设置电子印章ID
                     * @param _sealId 电子印章ID
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
                     * 获取电子印章类型
                     * @return SealType 电子印章类型
                     * 
                     */
                    std::string GetSealType() const;

                    /**
                     * 设置电子印章类型
                     * @param _sealType 电子印章类型
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
                     * 获取电子印章来源：
CREATE - 通过图片上传
GENERATE - 通过文字生成
                     * @return SealSource 电子印章来源：
CREATE - 通过图片上传
GENERATE - 通过文字生成
                     * 
                     */
                    std::string GetSealSource() const;

                    /**
                     * 设置电子印章来源：
CREATE - 通过图片上传
GENERATE - 通过文字生成
                     * @param _sealSource 电子印章来源：
CREATE - 通过图片上传
GENERATE - 通过文字生成
                     * 
                     */
                    void SetSealSource(const std::string& _sealSource);

                    /**
                     * 判断参数 SealSource 是否已赋值
                     * @return SealSource 是否已赋值
                     * 
                     */
                    bool SealSourceHasBeenSet() const;

                    /**
                     * 获取电子印章创建者
                     * @return Creator 电子印章创建者
                     * 
                     */
                    Caller GetCreator() const;

                    /**
                     * 设置电子印章创建者
                     * @param _creator 电子印章创建者
                     * 
                     */
                    void SetCreator(const Caller& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取电子印章创建时间戳
                     * @return CreatedOn 电子印章创建时间戳
                     * 
                     */
                    int64_t GetCreatedOn() const;

                    /**
                     * 设置电子印章创建时间戳
                     * @param _createdOn 电子印章创建时间戳
                     * 
                     */
                    void SetCreatedOn(const int64_t& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取电子印章所有人
                     * @return UserId 电子印章所有人
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置电子印章所有人
                     * @param _userId 电子印章所有人
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
                     * 获取电子印章URL
                     * @return FileUrl 电子印章URL
                     * 
                     */
                    FileUrl GetFileUrl() const;

                    /**
                     * 设置电子印章URL
                     * @param _fileUrl 电子印章URL
                     * 
                     */
                    void SetFileUrl(const FileUrl& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取是否为默认印章，false-非默认，true-默认
                     * @return DefaultSeal 是否为默认印章，false-非默认，true-默认
                     * 
                     */
                    bool GetDefaultSeal() const;

                    /**
                     * 设置是否为默认印章，false-非默认，true-默认
                     * @param _defaultSeal 是否为默认印章，false-非默认，true-默认
                     * 
                     */
                    void SetDefaultSeal(const bool& _defaultSeal);

                    /**
                     * 判断参数 DefaultSeal 是否已赋值
                     * @return DefaultSeal 是否已赋值
                     * 
                     */
                    bool DefaultSealHasBeenSet() const;

                private:

                    /**
                     * 电子印章ID
                     */
                    std::string m_sealId;
                    bool m_sealIdHasBeenSet;

                    /**
                     * 电子印章名称
                     */
                    std::string m_sealName;
                    bool m_sealNameHasBeenSet;

                    /**
                     * 电子印章类型
                     */
                    std::string m_sealType;
                    bool m_sealTypeHasBeenSet;

                    /**
                     * 电子印章来源：
CREATE - 通过图片上传
GENERATE - 通过文字生成
                     */
                    std::string m_sealSource;
                    bool m_sealSourceHasBeenSet;

                    /**
                     * 电子印章创建者
                     */
                    Caller m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 电子印章创建时间戳
                     */
                    int64_t m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 电子印章所有人
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 电子印章URL
                     */
                    FileUrl m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * 是否为默认印章，false-非默认，true-默认
                     */
                    bool m_defaultSeal;
                    bool m_defaultSealHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_SEAL_H_
