/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CODEREQ_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CODEREQ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * base64编码后的代码块
                */
                class CodeReq : public AbstractModel
                {
                public:
                    CodeReq();
                    ~CodeReq() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取包含函数代码的zip格式文件
                     * @return ZipFile 包含函数代码的zip格式文件
                     * 
                     */
                    std::string GetZipFile() const;

                    /**
                     * 设置包含函数代码的zip格式文件
                     * @param _zipFile 包含函数代码的zip格式文件
                     * 
                     */
                    void SetZipFile(const std::string& _zipFile);

                    /**
                     * 判断参数 ZipFile 是否已赋值
                     * @return ZipFile 是否已赋值
                     * 
                     */
                    bool ZipFileHasBeenSet() const;

                    /**
                     * 获取对象存储桶名称（填写存储桶名称自定义部分，不包含-appid）

                     * @return CosBucketName 对象存储桶名称（填写存储桶名称自定义部分，不包含-appid）

                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置对象存储桶名称（填写存储桶名称自定义部分，不包含-appid）

                     * @param _cosBucketName 对象存储桶名称（填写存储桶名称自定义部分，不包含-appid）

                     * 
                     */
                    void SetCosBucketName(const std::string& _cosBucketName);

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     * 
                     */
                    bool CosBucketNameHasBeenSet() const;

                    /**
                     * 获取对象存储中代码包文件路径，以/开头

                     * @return CosObjectName 对象存储中代码包文件路径，以/开头

                     * 
                     */
                    std::string GetCosObjectName() const;

                    /**
                     * 设置对象存储中代码包文件路径，以/开头

                     * @param _cosObjectName 对象存储中代码包文件路径，以/开头

                     * 
                     */
                    void SetCosObjectName(const std::string& _cosObjectName);

                    /**
                     * 判断参数 CosObjectName 是否已赋值
                     * @return CosObjectName 是否已赋值
                     * 
                     */
                    bool CosObjectNameHasBeenSet() const;

                    /**
                     * 获取对象存储的地域，地域为北京时需要传入ap-beijing,北京一区时需要传递ap-beijing-1，其他的地域不需要传递。

                     * @return CosBucketRegion 对象存储的地域，地域为北京时需要传入ap-beijing,北京一区时需要传递ap-beijing-1，其他的地域不需要传递。

                     * 
                     */
                    std::string GetCosBucketRegion() const;

                    /**
                     * 设置对象存储的地域，地域为北京时需要传入ap-beijing,北京一区时需要传递ap-beijing-1，其他的地域不需要传递。

                     * @param _cosBucketRegion 对象存储的地域，地域为北京时需要传入ap-beijing,北京一区时需要传递ap-beijing-1，其他的地域不需要传递。

                     * 
                     */
                    void SetCosBucketRegion(const std::string& _cosBucketRegion);

                    /**
                     * 判断参数 CosBucketRegion 是否已赋值
                     * @return CosBucketRegion 是否已赋值
                     * 
                     */
                    bool CosBucketRegionHasBeenSet() const;

                    /**
                     * 获取如果是从TempCos创建的话，需要传入TempCosObjectName
                     * @return TempCosObjectName 如果是从TempCos创建的话，需要传入TempCosObjectName
                     * 
                     */
                    std::string GetTempCosObjectName() const;

                    /**
                     * 设置如果是从TempCos创建的话，需要传入TempCosObjectName
                     * @param _tempCosObjectName 如果是从TempCos创建的话，需要传入TempCosObjectName
                     * 
                     */
                    void SetTempCosObjectName(const std::string& _tempCosObjectName);

                    /**
                     * 判断参数 TempCosObjectName 是否已赋值
                     * @return TempCosObjectName 是否已赋值
                     * 
                     */
                    bool TempCosObjectNameHasBeenSet() const;

                    /**
                     * 获取如果是通过Demo创建的话，需要传入DemoId

                     * @return DemoId 如果是通过Demo创建的话，需要传入DemoId

                     * 
                     */
                    std::string GetDemoId() const;

                    /**
                     * 设置如果是通过Demo创建的话，需要传入DemoId

                     * @param _demoId 如果是通过Demo创建的话，需要传入DemoId

                     * 
                     */
                    void SetDemoId(const std::string& _demoId);

                    /**
                     * 判断参数 DemoId 是否已赋值
                     * @return DemoId 是否已赋值
                     * 
                     */
                    bool DemoIdHasBeenSet() const;

                    /**
                     * 获取上传云开发cos后返回的时间戳
                     * @return CosTimestamp 上传云开发cos后返回的时间戳
                     * 
                     */
                    std::string GetCosTimestamp() const;

                    /**
                     * 设置上传云开发cos后返回的时间戳
                     * @param _cosTimestamp 上传云开发cos后返回的时间戳
                     * 
                     */
                    void SetCosTimestamp(const std::string& _cosTimestamp);

                    /**
                     * 判断参数 CosTimestamp 是否已赋值
                     * @return CosTimestamp 是否已赋值
                     * 
                     */
                    bool CosTimestampHasBeenSet() const;

                private:

                    /**
                     * 包含函数代码的zip格式文件
                     */
                    std::string m_zipFile;
                    bool m_zipFileHasBeenSet;

                    /**
                     * 对象存储桶名称（填写存储桶名称自定义部分，不包含-appid）

                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * 对象存储中代码包文件路径，以/开头

                     */
                    std::string m_cosObjectName;
                    bool m_cosObjectNameHasBeenSet;

                    /**
                     * 对象存储的地域，地域为北京时需要传入ap-beijing,北京一区时需要传递ap-beijing-1，其他的地域不需要传递。

                     */
                    std::string m_cosBucketRegion;
                    bool m_cosBucketRegionHasBeenSet;

                    /**
                     * 如果是从TempCos创建的话，需要传入TempCosObjectName
                     */
                    std::string m_tempCosObjectName;
                    bool m_tempCosObjectNameHasBeenSet;

                    /**
                     * 如果是通过Demo创建的话，需要传入DemoId

                     */
                    std::string m_demoId;
                    bool m_demoIdHasBeenSet;

                    /**
                     * 上传云开发cos后返回的时间戳
                     */
                    std::string m_cosTimestamp;
                    bool m_cosTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CODEREQ_H_
