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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_COMPRESSIONRULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_COMPRESSIONRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 智能压缩规则配置
                */
                class CompressionRule : public AbstractModel
                {
                public:
                    CompressionRule();
                    ~CompressionRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取true：需要设置为 ture，启用压缩
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Compress true：需要设置为 ture，启用压缩
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCompress() const;

                    /**
                     * 设置true：需要设置为 ture，启用压缩
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compress true：需要设置为 ture，启用压缩
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompress(const bool& _compress);

                    /**
                     * 判断参数 Compress 是否已赋值
                     * @return Compress 是否已赋值
                     * 
                     */
                    bool CompressHasBeenSet() const;

                    /**
                     * 获取触发压缩的文件长度最小值，单位为字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinLength 触发压缩的文件长度最小值，单位为字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMinLength() const;

                    /**
                     * 设置触发压缩的文件长度最小值，单位为字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minLength 触发压缩的文件长度最小值，单位为字节数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinLength(const int64_t& _minLength);

                    /**
                     * 判断参数 MinLength 是否已赋值
                     * @return MinLength 是否已赋值
                     * 
                     */
                    bool MinLengthHasBeenSet() const;

                    /**
                     * 获取触发压缩的文件长度最大值，单位为字节数
最大可设置为 30MB
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxLength 触发压缩的文件长度最大值，单位为字节数
最大可设置为 30MB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxLength() const;

                    /**
                     * 设置触发压缩的文件长度最大值，单位为字节数
最大可设置为 30MB
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxLength 触发压缩的文件长度最大值，单位为字节数
最大可设置为 30MB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxLength(const int64_t& _maxLength);

                    /**
                     * 判断参数 MaxLength 是否已赋值
                     * @return MaxLength 是否已赋值
                     * 
                     */
                    bool MaxLengthHasBeenSet() const;

                    /**
                     * 获取文件压缩算法
gzip：指定 GZIP 压缩
brotli：指定Brotli压缩
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Algorithms 文件压缩算法
gzip：指定 GZIP 压缩
brotli：指定Brotli压缩
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAlgorithms() const;

                    /**
                     * 设置文件压缩算法
gzip：指定 GZIP 压缩
brotli：指定Brotli压缩
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _algorithms 文件压缩算法
gzip：指定 GZIP 压缩
brotli：指定Brotli压缩
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlgorithms(const std::vector<std::string>& _algorithms);

                    /**
                     * 判断参数 Algorithms 是否已赋值
                     * @return Algorithms 是否已赋值
                     * 
                     */
                    bool AlgorithmsHasBeenSet() const;

                    /**
                     * 获取根据文件后缀类型压缩
例如 jpg、txt
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileExtensions 根据文件后缀类型压缩
例如 jpg、txt
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetFileExtensions() const;

                    /**
                     * 设置根据文件后缀类型压缩
例如 jpg、txt
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileExtensions 根据文件后缀类型压缩
例如 jpg、txt
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileExtensions(const std::vector<std::string>& _fileExtensions);

                    /**
                     * 判断参数 FileExtensions 是否已赋值
                     * @return FileExtensions 是否已赋值
                     * 
                     */
                    bool FileExtensionsHasBeenSet() const;

                    /**
                     * 获取规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
contentType：指定Content-Type头为特定值时生效
当指定了此字段时，FileExtensions字段不生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleType 规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
contentType：指定Content-Type头为特定值时生效
当指定了此字段时，FileExtensions字段不生效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
contentType：指定Content-Type头为特定值时生效
当指定了此字段时，FileExtensions字段不生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleType 规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
contentType：指定Content-Type头为特定值时生效
当指定了此字段时，FileExtensions字段不生效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取CacheType 对应类型下的匹配内容：
all 时填充 *
file 时填充后缀名，如 jpg、txt
directory 时填充路径，如 /xxx/test
path 时填充绝对路径，如 /xxx/test.html
contentType 时填充 text/html
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RulePaths CacheType 对应类型下的匹配内容：
all 时填充 *
file 时填充后缀名，如 jpg、txt
directory 时填充路径，如 /xxx/test
path 时填充绝对路径，如 /xxx/test.html
contentType 时填充 text/html
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置CacheType 对应类型下的匹配内容：
all 时填充 *
file 时填充后缀名，如 jpg、txt
directory 时填充路径，如 /xxx/test
path 时填充绝对路径，如 /xxx/test.html
contentType 时填充 text/html
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rulePaths CacheType 对应类型下的匹配内容：
all 时填充 *
file 时填充后缀名，如 jpg、txt
directory 时填充路径，如 /xxx/test
path 时填充绝对路径，如 /xxx/test.html
contentType 时填充 text/html
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRulePaths(const std::vector<std::string>& _rulePaths);

                    /**
                     * 判断参数 RulePaths 是否已赋值
                     * @return RulePaths 是否已赋值
                     * 
                     */
                    bool RulePathsHasBeenSet() const;

                private:

                    /**
                     * true：需要设置为 ture，启用压缩
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * 触发压缩的文件长度最小值，单位为字节数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_minLength;
                    bool m_minLengthHasBeenSet;

                    /**
                     * 触发压缩的文件长度最大值，单位为字节数
最大可设置为 30MB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxLength;
                    bool m_maxLengthHasBeenSet;

                    /**
                     * 文件压缩算法
gzip：指定 GZIP 压缩
brotli：指定Brotli压缩
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_algorithms;
                    bool m_algorithmsHasBeenSet;

                    /**
                     * 根据文件后缀类型压缩
例如 jpg、txt
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_fileExtensions;
                    bool m_fileExtensionsHasBeenSet;

                    /**
                     * 规则类型：
all：所有文件生效
file：指定文件后缀生效
directory：指定路径生效
path：指定绝对路径生效
contentType：指定Content-Type头为特定值时生效
当指定了此字段时，FileExtensions字段不生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * CacheType 对应类型下的匹配内容：
all 时填充 *
file 时填充后缀名，如 jpg、txt
directory 时填充路径，如 /xxx/test
path 时填充绝对路径，如 /xxx/test.html
contentType 时填充 text/html
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_rulePaths;
                    bool m_rulePathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_COMPRESSIONRULE_H_
