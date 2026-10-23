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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_AGENTRUNTIMECODE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_AGENTRUNTIMECODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/AgentRuntimeCodeImageConfig.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * Agent 云函数代码
                */
                class AgentRuntimeCode : public AbstractModel
                {
                public:
                    AgentRuntimeCode();
                    ~AgentRuntimeCode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对象存储桶名称
                     * @return CosBucketName 对象存储桶名称
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置对象存储桶名称
                     * @param _cosBucketName 对象存储桶名称
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
                     * 获取包含函数代码文件及其依赖项的 zip 格式文件，zip包大小上限为 50MB，使用该接口时要求将 zip 文件的内容转成 base64 编码
                     * @return ZipFile 包含函数代码文件及其依赖项的 zip 格式文件，zip包大小上限为 50MB，使用该接口时要求将 zip 文件的内容转成 base64 编码
                     * 
                     */
                    std::string GetZipFile() const;

                    /**
                     * 设置包含函数代码文件及其依赖项的 zip 格式文件，zip包大小上限为 50MB，使用该接口时要求将 zip 文件的内容转成 base64 编码
                     * @param _zipFile 包含函数代码文件及其依赖项的 zip 格式文件，zip包大小上限为 50MB，使用该接口时要求将 zip 文件的内容转成 base64 编码
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
                     * 获取镜像部署时配置TCR镜像信息
                     * @return ImageConfig 镜像部署时配置TCR镜像信息
                     * 
                     */
                    AgentRuntimeCodeImageConfig GetImageConfig() const;

                    /**
                     * 设置镜像部署时配置TCR镜像信息
                     * @param _imageConfig 镜像部署时配置TCR镜像信息
                     * 
                     */
                    void SetImageConfig(const AgentRuntimeCodeImageConfig& _imageConfig);

                    /**
                     * 判断参数 ImageConfig 是否已赋值
                     * @return ImageConfig 是否已赋值
                     * 
                     */
                    bool ImageConfigHasBeenSet() const;

                    /**
                     * 获取云函数DemoId
                     * @return DemoId 云函数DemoId
                     * 
                     */
                    std::string GetDemoId() const;

                    /**
                     * 设置云函数DemoId
                     * @param _demoId 云函数DemoId
                     * 
                     */
                    void SetDemoId(const std::string& _demoId);

                    /**
                     * 判断参数 DemoId 是否已赋值
                     * @return DemoId 是否已赋值
                     * 
                     */
                    bool DemoIdHasBeenSet() const;

                private:

                    /**
                     * 对象存储桶名称
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * 对象存储中代码包文件路径，以/开头
                     */
                    std::string m_cosObjectName;
                    bool m_cosObjectNameHasBeenSet;

                    /**
                     * 包含函数代码文件及其依赖项的 zip 格式文件，zip包大小上限为 50MB，使用该接口时要求将 zip 文件的内容转成 base64 编码
                     */
                    std::string m_zipFile;
                    bool m_zipFileHasBeenSet;

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
                     * 镜像部署时配置TCR镜像信息
                     */
                    AgentRuntimeCodeImageConfig m_imageConfig;
                    bool m_imageConfigHasBeenSet;

                    /**
                     * 云函数DemoId
                     */
                    std::string m_demoId;
                    bool m_demoIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_AGENTRUNTIMECODE_H_
