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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEFUNCTIONCODEREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEFUNCTIONCODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * UpdateFunctionCode请求参数结构体
                */
                class UpdateFunctionCodeRequest : public AbstractModel
                {
                public:
                    UpdateFunctionCodeRequest();
                    ~UpdateFunctionCodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取函数处理方法名称。名称格式支持“文件名称.函数名称”形式，文件名称和函数名称之间以"."隔开，文件名称和函数名称要求以字母开始和结尾，中间允许插入字母、数字、下划线和连接符，文件名称和函数名字的长度要求 2-60 个字符
                     * @return Handler 函数处理方法名称。名称格式支持“文件名称.函数名称”形式，文件名称和函数名称之间以"."隔开，文件名称和函数名称要求以字母开始和结尾，中间允许插入字母、数字、下划线和连接符，文件名称和函数名字的长度要求 2-60 个字符
                     */
                    std::string GetHandler() const;

                    /**
                     * 设置函数处理方法名称。名称格式支持“文件名称.函数名称”形式，文件名称和函数名称之间以"."隔开，文件名称和函数名称要求以字母开始和结尾，中间允许插入字母、数字、下划线和连接符，文件名称和函数名字的长度要求 2-60 个字符
                     * @param Handler 函数处理方法名称。名称格式支持“文件名称.函数名称”形式，文件名称和函数名称之间以"."隔开，文件名称和函数名称要求以字母开始和结尾，中间允许插入字母、数字、下划线和连接符，文件名称和函数名字的长度要求 2-60 个字符
                     */
                    void SetHandler(const std::string& _handler);

                    /**
                     * 判断参数 Handler 是否已赋值
                     * @return Handler 是否已赋值
                     */
                    bool HandlerHasBeenSet() const;

                    /**
                     * 获取要修改的函数名称
                     * @return FunctionName 要修改的函数名称
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置要修改的函数名称
                     * @param FunctionName 要修改的函数名称
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取对象存储桶名称
                     * @return CosBucketName 对象存储桶名称
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置对象存储桶名称
                     * @param CosBucketName 对象存储桶名称
                     */
                    void SetCosBucketName(const std::string& _cosBucketName);

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     */
                    bool CosBucketNameHasBeenSet() const;

                    /**
                     * 获取对象存储对象路径
                     * @return CosObjectName 对象存储对象路径
                     */
                    std::string GetCosObjectName() const;

                    /**
                     * 设置对象存储对象路径
                     * @param CosObjectName 对象存储对象路径
                     */
                    void SetCosObjectName(const std::string& _cosObjectName);

                    /**
                     * 判断参数 CosObjectName 是否已赋值
                     * @return CosObjectName 是否已赋值
                     */
                    bool CosObjectNameHasBeenSet() const;

                    /**
                     * 获取包含函数代码文件及其依赖项的 zip 格式文件，使用该接口时要求将 zip 文件的内容转成 base64 编码，最大支持20M
                     * @return ZipFile 包含函数代码文件及其依赖项的 zip 格式文件，使用该接口时要求将 zip 文件的内容转成 base64 编码，最大支持20M
                     */
                    std::string GetZipFile() const;

                    /**
                     * 设置包含函数代码文件及其依赖项的 zip 格式文件，使用该接口时要求将 zip 文件的内容转成 base64 编码，最大支持20M
                     * @param ZipFile 包含函数代码文件及其依赖项的 zip 格式文件，使用该接口时要求将 zip 文件的内容转成 base64 编码，最大支持20M
                     */
                    void SetZipFile(const std::string& _zipFile);

                    /**
                     * 判断参数 ZipFile 是否已赋值
                     * @return ZipFile 是否已赋值
                     */
                    bool ZipFileHasBeenSet() const;

                    /**
                     * 获取对象存储的地域，注：北京分为ap-beijing和ap-beijing-1
                     * @return CosBucketRegion 对象存储的地域，注：北京分为ap-beijing和ap-beijing-1
                     */
                    std::string GetCosBucketRegion() const;

                    /**
                     * 设置对象存储的地域，注：北京分为ap-beijing和ap-beijing-1
                     * @param CosBucketRegion 对象存储的地域，注：北京分为ap-beijing和ap-beijing-1
                     */
                    void SetCosBucketRegion(const std::string& _cosBucketRegion);

                    /**
                     * 判断参数 CosBucketRegion 是否已赋值
                     * @return CosBucketRegion 是否已赋值
                     */
                    bool CosBucketRegionHasBeenSet() const;

                private:

                    /**
                     * 函数处理方法名称。名称格式支持“文件名称.函数名称”形式，文件名称和函数名称之间以"."隔开，文件名称和函数名称要求以字母开始和结尾，中间允许插入字母、数字、下划线和连接符，文件名称和函数名字的长度要求 2-60 个字符
                     */
                    std::string m_handler;
                    bool m_handlerHasBeenSet;

                    /**
                     * 要修改的函数名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 对象存储桶名称
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * 对象存储对象路径
                     */
                    std::string m_cosObjectName;
                    bool m_cosObjectNameHasBeenSet;

                    /**
                     * 包含函数代码文件及其依赖项的 zip 格式文件，使用该接口时要求将 zip 文件的内容转成 base64 编码，最大支持20M
                     */
                    std::string m_zipFile;
                    bool m_zipFileHasBeenSet;

                    /**
                     * 对象存储的地域，注：北京分为ap-beijing和ap-beijing-1
                     */
                    std::string m_cosBucketRegion;
                    bool m_cosBucketRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_UPDATEFUNCTIONCODEREQUEST_H_
