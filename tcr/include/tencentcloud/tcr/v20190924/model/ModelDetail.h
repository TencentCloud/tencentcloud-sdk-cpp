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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_MODELDETAIL_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_MODELDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 模型详情
                */
                class ModelDetail : public AbstractModel
                {
                public:
                    ModelDetail();
                    ~ModelDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return ModelName 
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置
                     * @param _modelName 
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取
                     * @return NamespaceName 
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置
                     * @param _namespaceName 
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取
                     * @return Version 
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置
                     * @param _version 
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取
                     * @return Digest 
                     * 
                     */
                    std::string GetDigest() const;

                    /**
                     * 设置
                     * @param _digest 
                     * 
                     */
                    void SetDigest(const std::string& _digest);

                    /**
                     * 判断参数 Digest 是否已赋值
                     * @return Digest 是否已赋值
                     * 
                     */
                    bool DigestHasBeenSet() const;

                    /**
                     * 获取
                     * @return Size 
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置
                     * @param _size 
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Framework 
                     * 
                     */
                    std::string GetFramework() const;

                    /**
                     * 设置
                     * @param _framework 
                     * 
                     */
                    void SetFramework(const std::string& _framework);

                    /**
                     * 判断参数 Framework 是否已赋值
                     * @return Framework 是否已赋值
                     * 
                     */
                    bool FrameworkHasBeenSet() const;

                    /**
                     * 获取
                     * @return Precision 
                     * 
                     */
                    std::string GetPrecision() const;

                    /**
                     * 设置
                     * @param _precision 
                     * 
                     */
                    void SetPrecision(const std::string& _precision);

                    /**
                     * 判断参数 Precision 是否已赋值
                     * @return Precision 是否已赋值
                     * 
                     */
                    bool PrecisionHasBeenSet() const;

                    /**
                     * 获取
                     * @return FileFormat 
                     * 
                     */
                    std::string GetFileFormat() const;

                    /**
                     * 设置
                     * @param _fileFormat 
                     * 
                     */
                    void SetFileFormat(const std::string& _fileFormat);

                    /**
                     * 判断参数 FileFormat 是否已赋值
                     * @return FileFormat 是否已赋值
                     * 
                     */
                    bool FileFormatHasBeenSet() const;

                    /**
                     * 获取
                     * @return ParamSize 
                     * 
                     */
                    std::string GetParamSize() const;

                    /**
                     * 设置
                     * @param _paramSize 
                     * 
                     */
                    void SetParamSize(const std::string& _paramSize);

                    /**
                     * 判断参数 ParamSize 是否已赋值
                     * @return ParamSize 是否已赋值
                     * 
                     */
                    bool ParamSizeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Family 
                     * 
                     */
                    std::string GetFamily() const;

                    /**
                     * 设置
                     * @param _family 
                     * 
                     */
                    void SetFamily(const std::string& _family);

                    /**
                     * 判断参数 Family 是否已赋值
                     * @return Family 是否已赋值
                     * 
                     */
                    bool FamilyHasBeenSet() const;

                    /**
                     * 获取
                     * @return IsRecommended 
                     * 
                     */
                    bool GetIsRecommended() const;

                    /**
                     * 设置
                     * @param _isRecommended 
                     * 
                     */
                    void SetIsRecommended(const bool& _isRecommended);

                    /**
                     * 判断参数 IsRecommended 是否已赋值
                     * @return IsRecommended 是否已赋值
                     * 
                     */
                    bool IsRecommendedHasBeenSet() const;

                    /**
                     * 获取
                     * @return PushTime 
                     * 
                     */
                    std::string GetPushTime() const;

                    /**
                     * 设置
                     * @param _pushTime 
                     * 
                     */
                    void SetPushTime(const std::string& _pushTime);

                    /**
                     * 判断参数 PushTime 是否已赋值
                     * @return PushTime 是否已赋值
                     * 
                     */
                    bool PushTimeHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_digest;
                    bool m_digestHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_framework;
                    bool m_frameworkHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_precision;
                    bool m_precisionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_fileFormat;
                    bool m_fileFormatHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_paramSize;
                    bool m_paramSizeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_family;
                    bool m_familyHasBeenSet;

                    /**
                     * 
                     */
                    bool m_isRecommended;
                    bool m_isRecommendedHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_pushTime;
                    bool m_pushTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MODELDETAIL_H_
