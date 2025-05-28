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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_SAVEDOCREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_SAVEDOCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AttrLabelRefer.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * SaveDoc请求参数结构体
                */
                class SaveDocRequest : public AbstractModel
                {
                public:
                    SaveDocRequest();
                    ~SaveDocRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return BotBizId 应用ID
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置应用ID
                     * @param _botBizId 应用ID
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
                     * 获取文件名
                     * @return FileName 文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名
                     * @param _fileName 文件名
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取文档支持下面类型
pdf、doc、docx、ppt、mhtml、pptx、wps、ppsx，单个文件不超过200MB；
xlsx、xls、md、txt、csv、html，单个文件不超过20MB；

图片支持下面类型：
jpg、png、jpeg、tiff、bmp、gif，单个文件不超过50MB
                     * @return FileType 文档支持下面类型
pdf、doc、docx、ppt、mhtml、pptx、wps、ppsx，单个文件不超过200MB；
xlsx、xls、md、txt、csv、html，单个文件不超过20MB；

图片支持下面类型：
jpg、png、jpeg、tiff、bmp、gif，单个文件不超过50MB
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文档支持下面类型
pdf、doc、docx、ppt、mhtml、pptx、wps、ppsx，单个文件不超过200MB；
xlsx、xls、md、txt、csv、html，单个文件不超过20MB；

图片支持下面类型：
jpg、png、jpeg、tiff、bmp、gif，单个文件不超过50MB
                     * @param _fileType 文档支持下面类型
pdf、doc、docx、ppt、mhtml、pptx、wps、ppsx，单个文件不超过200MB；
xlsx、xls、md、txt、csv、html，单个文件不超过20MB；

图片支持下面类型：
jpg、png、jpeg、tiff、bmp、gif，单个文件不超过50MB
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
                     * 获取平台cos路径，与DescribeStorageCredential接口查询UploadPath参数保持一致
                     * @return CosUrl 平台cos路径，与DescribeStorageCredential接口查询UploadPath参数保持一致
                     * 
                     */
                    std::string GetCosUrl() const;

                    /**
                     * 设置平台cos路径，与DescribeStorageCredential接口查询UploadPath参数保持一致
                     * @param _cosUrl 平台cos路径，与DescribeStorageCredential接口查询UploadPath参数保持一致
                     * 
                     */
                    void SetCosUrl(const std::string& _cosUrl);

                    /**
                     * 判断参数 CosUrl 是否已赋值
                     * @return CosUrl 是否已赋值
                     * 
                     */
                    bool CosUrlHasBeenSet() const;

                    /**
                     * 获取ETag 全称为 Entity Tag，是对象被创建时标识对象内容的信息标签，可用于检查对象的内容是否发生变化 成功上传cos后，从返回头中获取
                     * @return ETag ETag 全称为 Entity Tag，是对象被创建时标识对象内容的信息标签，可用于检查对象的内容是否发生变化 成功上传cos后，从返回头中获取
                     * 
                     */
                    std::string GetETag() const;

                    /**
                     * 设置ETag 全称为 Entity Tag，是对象被创建时标识对象内容的信息标签，可用于检查对象的内容是否发生变化 成功上传cos后，从返回头中获取
                     * @param _eTag ETag 全称为 Entity Tag，是对象被创建时标识对象内容的信息标签，可用于检查对象的内容是否发生变化 成功上传cos后，从返回头中获取
                     * 
                     */
                    void SetETag(const std::string& _eTag);

                    /**
                     * 判断参数 ETag 是否已赋值
                     * @return ETag 是否已赋值
                     * 
                     */
                    bool ETagHasBeenSet() const;

                    /**
                     * 获取cos_hash x-cos-hash-crc64ecma 头部中的 CRC64编码进行校验上传到云端的文件和本地文件的一致性  
成功上传cos后，从返回头中获取

请注意：
cos_hash为文档唯一性标识，与文件名无关 相同的cos_hash会被判定为重复文档
                     * @return CosHash cos_hash x-cos-hash-crc64ecma 头部中的 CRC64编码进行校验上传到云端的文件和本地文件的一致性  
成功上传cos后，从返回头中获取

请注意：
cos_hash为文档唯一性标识，与文件名无关 相同的cos_hash会被判定为重复文档
                     * 
                     */
                    std::string GetCosHash() const;

                    /**
                     * 设置cos_hash x-cos-hash-crc64ecma 头部中的 CRC64编码进行校验上传到云端的文件和本地文件的一致性  
成功上传cos后，从返回头中获取

请注意：
cos_hash为文档唯一性标识，与文件名无关 相同的cos_hash会被判定为重复文档
                     * @param _cosHash cos_hash x-cos-hash-crc64ecma 头部中的 CRC64编码进行校验上传到云端的文件和本地文件的一致性  
成功上传cos后，从返回头中获取

请注意：
cos_hash为文档唯一性标识，与文件名无关 相同的cos_hash会被判定为重复文档
                     * 
                     */
                    void SetCosHash(const std::string& _cosHash);

                    /**
                     * 判断参数 CosHash 是否已赋值
                     * @return CosHash 是否已赋值
                     * 
                     */
                    bool CosHashHasBeenSet() const;

                    /**
                     * 获取文件大小
                     * @return Size 文件大小
                     * 
                     */
                    std::string GetSize() const;

                    /**
                     * 设置文件大小
                     * @param _size 文件大小
                     * 
                     */
                    void SetSize(const std::string& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取标签适用范围，需要传参为1
                     * @return AttrRange 标签适用范围，需要传参为1
                     * 
                     */
                    uint64_t GetAttrRange() const;

                    /**
                     * 设置标签适用范围，需要传参为1
                     * @param _attrRange 标签适用范围，需要传参为1
                     * 
                     */
                    void SetAttrRange(const uint64_t& _attrRange);

                    /**
                     * 判断参数 AttrRange 是否已赋值
                     * @return AttrRange 是否已赋值
                     * 
                     */
                    bool AttrRangeHasBeenSet() const;

                    /**
                     * 获取来源（0 从本地文档导入），默认值为0
                     * @return Source 来源（0 从本地文档导入），默认值为0
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置来源（0 从本地文档导入），默认值为0
                     * @param _source 来源（0 从本地文档导入），默认值为0
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取自定义链接地址, IsRefer为true的时候，该值才有意义
                     * @return WebUrl 自定义链接地址, IsRefer为true的时候，该值才有意义
                     * 
                     */
                    std::string GetWebUrl() const;

                    /**
                     * 设置自定义链接地址, IsRefer为true的时候，该值才有意义
                     * @param _webUrl 自定义链接地址, IsRefer为true的时候，该值才有意义
                     * 
                     */
                    void SetWebUrl(const std::string& _webUrl);

                    /**
                     * 判断参数 WebUrl 是否已赋值
                     * @return WebUrl 是否已赋值
                     * 
                     */
                    bool WebUrlHasBeenSet() const;

                    /**
                     * 获取标签引用
                     * @return AttrLabels 标签引用
                     * 
                     */
                    std::vector<AttrLabelRefer> GetAttrLabels() const;

                    /**
                     * 设置标签引用
                     * @param _attrLabels 标签引用
                     * 
                     */
                    void SetAttrLabels(const std::vector<AttrLabelRefer>& _attrLabels);

                    /**
                     * 判断参数 AttrLabels 是否已赋值
                     * @return AttrLabels 是否已赋值
                     * 
                     */
                    bool AttrLabelsHasBeenSet() const;

                    /**
                     * 获取外部引用链接类型 0：系统链接 1：自定义链接
值为1时，WebUrl 字段不能为空，否则不生效。
                     * @return ReferUrlType 外部引用链接类型 0：系统链接 1：自定义链接
值为1时，WebUrl 字段不能为空，否则不生效。
                     * 
                     */
                    uint64_t GetReferUrlType() const;

                    /**
                     * 设置外部引用链接类型 0：系统链接 1：自定义链接
值为1时，WebUrl 字段不能为空，否则不生效。
                     * @param _referUrlType 外部引用链接类型 0：系统链接 1：自定义链接
值为1时，WebUrl 字段不能为空，否则不生效。
                     * 
                     */
                    void SetReferUrlType(const uint64_t& _referUrlType);

                    /**
                     * 判断参数 ReferUrlType 是否已赋值
                     * @return ReferUrlType 是否已赋值
                     * 
                     */
                    bool ReferUrlTypeHasBeenSet() const;

                    /**
                     * 获取有效开始时间，unix时间戳
                     * @return ExpireStart 有效开始时间，unix时间戳
                     * 
                     */
                    std::string GetExpireStart() const;

                    /**
                     * 设置有效开始时间，unix时间戳
                     * @param _expireStart 有效开始时间，unix时间戳
                     * 
                     */
                    void SetExpireStart(const std::string& _expireStart);

                    /**
                     * 判断参数 ExpireStart 是否已赋值
                     * @return ExpireStart 是否已赋值
                     * 
                     */
                    bool ExpireStartHasBeenSet() const;

                    /**
                     * 获取有效结束时间，unix时间戳，0代表永久有效
                     * @return ExpireEnd 有效结束时间，unix时间戳，0代表永久有效
                     * 
                     */
                    std::string GetExpireEnd() const;

                    /**
                     * 设置有效结束时间，unix时间戳，0代表永久有效
                     * @param _expireEnd 有效结束时间，unix时间戳，0代表永久有效
                     * 
                     */
                    void SetExpireEnd(const std::string& _expireEnd);

                    /**
                     * 判断参数 ExpireEnd 是否已赋值
                     * @return ExpireEnd 是否已赋值
                     * 
                     */
                    bool ExpireEndHasBeenSet() const;

                    /**
                     * 获取是否引用链接
                     * @return IsRefer 是否引用链接
                     * 
                     */
                    bool GetIsRefer() const;

                    /**
                     * 设置是否引用链接
                     * @param _isRefer 是否引用链接
                     * 
                     */
                    void SetIsRefer(const bool& _isRefer);

                    /**
                     * 判断参数 IsRefer 是否已赋值
                     * @return IsRefer 是否已赋值
                     * 
                     */
                    bool IsReferHasBeenSet() const;

                    /**
                     * 获取文档操作类型：1：批量导入（批量导入问答对）；2:文档导入（正常导入单个文档） 默认为1  <br> 请注意，opt=1的时候请从腾讯云智能体开发平台页面下载excel模板
                     * @return Opt 文档操作类型：1：批量导入（批量导入问答对）；2:文档导入（正常导入单个文档） 默认为1  <br> 请注意，opt=1的时候请从腾讯云智能体开发平台页面下载excel模板
                     * 
                     */
                    uint64_t GetOpt() const;

                    /**
                     * 设置文档操作类型：1：批量导入（批量导入问答对）；2:文档导入（正常导入单个文档） 默认为1  <br> 请注意，opt=1的时候请从腾讯云智能体开发平台页面下载excel模板
                     * @param _opt 文档操作类型：1：批量导入（批量导入问答对）；2:文档导入（正常导入单个文档） 默认为1  <br> 请注意，opt=1的时候请从腾讯云智能体开发平台页面下载excel模板
                     * 
                     */
                    void SetOpt(const uint64_t& _opt);

                    /**
                     * 判断参数 Opt 是否已赋值
                     * @return Opt 是否已赋值
                     * 
                     */
                    bool OptHasBeenSet() const;

                    /**
                     * 获取分类ID
                     * @return CateBizId 分类ID
                     * 
                     */
                    std::string GetCateBizId() const;

                    /**
                     * 设置分类ID
                     * @param _cateBizId 分类ID
                     * 
                     */
                    void SetCateBizId(const std::string& _cateBizId);

                    /**
                     * 判断参数 CateBizId 是否已赋值
                     * @return CateBizId 是否已赋值
                     * 
                     */
                    bool CateBizIdHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * 文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文档支持下面类型
pdf、doc、docx、ppt、mhtml、pptx、wps、ppsx，单个文件不超过200MB；
xlsx、xls、md、txt、csv、html，单个文件不超过20MB；

图片支持下面类型：
jpg、png、jpeg、tiff、bmp、gif，单个文件不超过50MB
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 平台cos路径，与DescribeStorageCredential接口查询UploadPath参数保持一致
                     */
                    std::string m_cosUrl;
                    bool m_cosUrlHasBeenSet;

                    /**
                     * ETag 全称为 Entity Tag，是对象被创建时标识对象内容的信息标签，可用于检查对象的内容是否发生变化 成功上传cos后，从返回头中获取
                     */
                    std::string m_eTag;
                    bool m_eTagHasBeenSet;

                    /**
                     * cos_hash x-cos-hash-crc64ecma 头部中的 CRC64编码进行校验上传到云端的文件和本地文件的一致性  
成功上传cos后，从返回头中获取

请注意：
cos_hash为文档唯一性标识，与文件名无关 相同的cos_hash会被判定为重复文档
                     */
                    std::string m_cosHash;
                    bool m_cosHashHasBeenSet;

                    /**
                     * 文件大小
                     */
                    std::string m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 标签适用范围，需要传参为1
                     */
                    uint64_t m_attrRange;
                    bool m_attrRangeHasBeenSet;

                    /**
                     * 来源（0 从本地文档导入），默认值为0
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 自定义链接地址, IsRefer为true的时候，该值才有意义
                     */
                    std::string m_webUrl;
                    bool m_webUrlHasBeenSet;

                    /**
                     * 标签引用
                     */
                    std::vector<AttrLabelRefer> m_attrLabels;
                    bool m_attrLabelsHasBeenSet;

                    /**
                     * 外部引用链接类型 0：系统链接 1：自定义链接
值为1时，WebUrl 字段不能为空，否则不生效。
                     */
                    uint64_t m_referUrlType;
                    bool m_referUrlTypeHasBeenSet;

                    /**
                     * 有效开始时间，unix时间戳
                     */
                    std::string m_expireStart;
                    bool m_expireStartHasBeenSet;

                    /**
                     * 有效结束时间，unix时间戳，0代表永久有效
                     */
                    std::string m_expireEnd;
                    bool m_expireEndHasBeenSet;

                    /**
                     * 是否引用链接
                     */
                    bool m_isRefer;
                    bool m_isReferHasBeenSet;

                    /**
                     * 文档操作类型：1：批量导入（批量导入问答对）；2:文档导入（正常导入单个文档） 默认为1  <br> 请注意，opt=1的时候请从腾讯云智能体开发平台页面下载excel模板
                     */
                    uint64_t m_opt;
                    bool m_optHasBeenSet;

                    /**
                     * 分类ID
                     */
                    std::string m_cateBizId;
                    bool m_cateBizIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_SAVEDOCREQUEST_H_
