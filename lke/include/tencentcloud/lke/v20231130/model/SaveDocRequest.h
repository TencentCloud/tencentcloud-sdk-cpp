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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_SAVEDOCREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_SAVEDOCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AttrLabelRefer.h>
#include <tencentcloud/lke/v20231130/model/DuplicateFileHandle.h>
#include <tencentcloud/lke/v20231130/model/UpdatePeriodInfo.h>


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
                     * 获取应用ID，获取方法参看[如何获取   BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)
                     * @return BotBizId 应用ID，获取方法参看[如何获取   BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置应用ID，获取方法参看[如何获取   BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)
                     * @param _botBizId 应用ID，获取方法参看[如何获取   BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)
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
                     * 获取文件名，需要包含文件扩展名
                     * @return FileName 文件名，需要包含文件扩展名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名，需要包含文件扩展名
                     * @param _fileName 文件名，需要包含文件扩展名
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
                     * 获取标签适用范围，1:全部，2:按条件。默认为1。
                     * @return AttrRange 标签适用范围，1:全部，2:按条件。默认为1。
                     * 
                     */
                    uint64_t GetAttrRange() const;

                    /**
                     * 设置标签适用范围，1:全部，2:按条件。默认为1。
                     * @param _attrRange 标签适用范围，1:全部，2:按条件。默认为1。
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
                     * 获取有效开始时间，unix秒级时间戳，默认为0
                     * @return ExpireStart 有效开始时间，unix秒级时间戳，默认为0
                     * 
                     */
                    std::string GetExpireStart() const;

                    /**
                     * 设置有效开始时间，unix秒级时间戳，默认为0
                     * @param _expireStart 有效开始时间，unix秒级时间戳，默认为0
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
                     * 获取有效结束时间，unix秒级时间戳，默认为0代表永久有效
                     * @return ExpireEnd 有效结束时间，unix秒级时间戳，默认为0代表永久有效
                     * 
                     */
                    std::string GetExpireEnd() const;

                    /**
                     * 设置有效结束时间，unix秒级时间戳，默认为0代表永久有效
                     * @param _expireEnd 有效结束时间，unix秒级时间戳，默认为0代表永久有效
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
                     * 获取是否显示引用的文档来源(false不显示 true显示）默认false
                     * @return IsRefer 是否显示引用的文档来源(false不显示 true显示）默认false
                     * 
                     */
                    bool GetIsRefer() const;

                    /**
                     * 设置是否显示引用的文档来源(false不显示 true显示）默认false
                     * @param _isRefer 是否显示引用的文档来源(false不显示 true显示）默认false
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
                     * 获取文档操作类型：1：批量导入（批量导入问答对）；2:文档导入（正常导入单个文档） 默认为2 <br> 请注意，opt=1的时候请从腾讯云智能体开发平台页面下载excel模板
                     * @return Opt 文档操作类型：1：批量导入（批量导入问答对）；2:文档导入（正常导入单个文档） 默认为2 <br> 请注意，opt=1的时候请从腾讯云智能体开发平台页面下载excel模板
                     * 
                     */
                    uint64_t GetOpt() const;

                    /**
                     * 设置文档操作类型：1：批量导入（批量导入问答对）；2:文档导入（正常导入单个文档） 默认为2 <br> 请注意，opt=1的时候请从腾讯云智能体开发平台页面下载excel模板
                     * @param _opt 文档操作类型：1：批量导入（批量导入问答对）；2:文档导入（正常导入单个文档） 默认为2 <br> 请注意，opt=1的时候请从腾讯云智能体开发平台页面下载excel模板
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

                    /**
                     * 获取是否可下载，IsRefer为true并且ReferUrlType为0时，该值才有意义
                     * @return IsDownload 是否可下载，IsRefer为true并且ReferUrlType为0时，该值才有意义
                     * 
                     */
                    bool GetIsDownload() const;

                    /**
                     * 设置是否可下载，IsRefer为true并且ReferUrlType为0时，该值才有意义
                     * @param _isDownload 是否可下载，IsRefer为true并且ReferUrlType为0时，该值才有意义
                     * 
                     */
                    void SetIsDownload(const bool& _isDownload);

                    /**
                     * 判断参数 IsDownload 是否已赋值
                     * @return IsDownload 是否已赋值
                     * 
                     */
                    bool IsDownloadHasBeenSet() const;

                    /**
                     * 获取重复文档处理方式，按顺序匹配第一个满足条件的方式处理
                     * @return DuplicateFileHandles 重复文档处理方式，按顺序匹配第一个满足条件的方式处理
                     * 
                     */
                    std::vector<DuplicateFileHandle> GetDuplicateFileHandles() const;

                    /**
                     * 设置重复文档处理方式，按顺序匹配第一个满足条件的方式处理
                     * @param _duplicateFileHandles 重复文档处理方式，按顺序匹配第一个满足条件的方式处理
                     * 
                     */
                    void SetDuplicateFileHandles(const std::vector<DuplicateFileHandle>& _duplicateFileHandles);

                    /**
                     * 判断参数 DuplicateFileHandles 是否已赋值
                     * @return DuplicateFileHandles 是否已赋值
                     * 
                     */
                    bool DuplicateFileHandlesHasBeenSet() const;

                    /**
                     * 获取自定义切分规则

请求参数为一个 **JSON Object**，具体格式可参见接口示例值。包含以下主要字段：

| 字段名             | 类型      | 说明                                   |
|--------------------|--------|----------------------------------------|
| `xlsx_splitter`    | Object   | **Excel（xlsx）文件切分策略配置**，仅当处理 Excel 文件时有效 |
| `common_splitter`  | Object  | **通用文件（如 txt、pdf 等）切分策略配置**，按页或按标签切分 |
| `table_style`      | String | 表格内容的输出格式，如 HTML 或 Markdown |

---

## `xlsx_splitter`（Excel 切分策略）

用于配置 **表格文件的切分方式**。
**类型：Object**

```json
"xlsx_splitter": {
  "header_interval": [1, 2],
  "content_start": 10,
  "split_row": 2
}
```

### 字段说明：

| 字段名            | 类型   | 说明                                                                 |
|-------------------|--------|----------------------------------------------------------------------|
| `header_interval` | Array\<Number\>  | 表头所在的行区间，格式为 `[起始行, 结束行]`，**行号从 1 开始计数**。例如 `[1, 2]` 表示第 1~2 行为表头。 |
| `content_start`   | Number  | **表格内容的起始行号（从 1 开始）**。 |
| `split_row`       | Number   | **切分行数**。                   |

---
## `common_splitter`（通用文件切分策略）

用于配置 **非 Excel 文件（如 TXT、PDF、DOCX 等）的切分方式**，支持两种策略：**按页切分（page）** 或 **按标识符切分（tag）**。

**类型：Object**

```json
"common_splitter": {
  "splitter": "page",
  "page_splitter": {
    "chunk_length": 1000,
    "chunk_overlap_length": 100
  }
}
```

### 字段说明：

| 字段名            | 类型     | 说明                                                                 |
|-------------------|--------|---------------------------------------------------|
| `splitter`        | String  | 切分策略类型，可选值为：`"page"`（按页切分） 或 `"tag"`（按标识符切分）。 |
| `page_splitter`   | Object   | **按页切分的配置**。                                         |
| `page_splitter.chunk_length`   | 1000    | **切片最大长度**。              |
| `page_splitter.chunk_overlap_length`  | 100    | **切片重叠长度**。  |
| `tag_splitter`             | Object          | **自定义切分配置**。             |
| `tag_splitter.tag`         | Array\<String\>    | **切分标识符**。                             |
| `tag_splitter.chunk_length`| Number       | **切片最大长度**。                                                               |
| `tag_splitter.chunk_overlap_length` | Number    | **切块重叠长度**。                                                  |

🔹 **补充说明：**

- `splitter` 字段的值可以是：
  - `"page"`：只使用按页切分逻辑，此时只需要关心 `page_splitter` 相关字段。
  - `"tag"`：只使用按标识符（如分号、换行等）切分逻辑，此时关注 `tag_splitter`。
---

##  `table_style`（表格输出样式）

用于指定 **表格类内容（比如从 Excel 或 CSV 中提取的表格）最终以何种格式返回**，方便前端展示或后续处理。

**类型：String**

```json
"table_style": "md"
```

### 字段说明：

| 字段名       | 类型   | 说明                                                                 |
|--------------|--------|----------------------------------------------------------------------|
| `table_style` | String | 指定表格内容的输出格式。可用值：<br>• `"html"`：以 HTML 表格形式返回，适合网页展示。<br>• `"md"`：以 Markdown 表格语法返回，适合文档或 Markdown 渲染环境。|
                     * @return SplitRule 自定义切分规则

请求参数为一个 **JSON Object**，具体格式可参见接口示例值。包含以下主要字段：

| 字段名             | 类型      | 说明                                   |
|--------------------|--------|----------------------------------------|
| `xlsx_splitter`    | Object   | **Excel（xlsx）文件切分策略配置**，仅当处理 Excel 文件时有效 |
| `common_splitter`  | Object  | **通用文件（如 txt、pdf 等）切分策略配置**，按页或按标签切分 |
| `table_style`      | String | 表格内容的输出格式，如 HTML 或 Markdown |

---

## `xlsx_splitter`（Excel 切分策略）

用于配置 **表格文件的切分方式**。
**类型：Object**

```json
"xlsx_splitter": {
  "header_interval": [1, 2],
  "content_start": 10,
  "split_row": 2
}
```

### 字段说明：

| 字段名            | 类型   | 说明                                                                 |
|-------------------|--------|----------------------------------------------------------------------|
| `header_interval` | Array\<Number\>  | 表头所在的行区间，格式为 `[起始行, 结束行]`，**行号从 1 开始计数**。例如 `[1, 2]` 表示第 1~2 行为表头。 |
| `content_start`   | Number  | **表格内容的起始行号（从 1 开始）**。 |
| `split_row`       | Number   | **切分行数**。                   |

---
## `common_splitter`（通用文件切分策略）

用于配置 **非 Excel 文件（如 TXT、PDF、DOCX 等）的切分方式**，支持两种策略：**按页切分（page）** 或 **按标识符切分（tag）**。

**类型：Object**

```json
"common_splitter": {
  "splitter": "page",
  "page_splitter": {
    "chunk_length": 1000,
    "chunk_overlap_length": 100
  }
}
```

### 字段说明：

| 字段名            | 类型     | 说明                                                                 |
|-------------------|--------|---------------------------------------------------|
| `splitter`        | String  | 切分策略类型，可选值为：`"page"`（按页切分） 或 `"tag"`（按标识符切分）。 |
| `page_splitter`   | Object   | **按页切分的配置**。                                         |
| `page_splitter.chunk_length`   | 1000    | **切片最大长度**。              |
| `page_splitter.chunk_overlap_length`  | 100    | **切片重叠长度**。  |
| `tag_splitter`             | Object          | **自定义切分配置**。             |
| `tag_splitter.tag`         | Array\<String\>    | **切分标识符**。                             |
| `tag_splitter.chunk_length`| Number       | **切片最大长度**。                                                               |
| `tag_splitter.chunk_overlap_length` | Number    | **切块重叠长度**。                                                  |

🔹 **补充说明：**

- `splitter` 字段的值可以是：
  - `"page"`：只使用按页切分逻辑，此时只需要关心 `page_splitter` 相关字段。
  - `"tag"`：只使用按标识符（如分号、换行等）切分逻辑，此时关注 `tag_splitter`。
---

##  `table_style`（表格输出样式）

用于指定 **表格类内容（比如从 Excel 或 CSV 中提取的表格）最终以何种格式返回**，方便前端展示或后续处理。

**类型：String**

```json
"table_style": "md"
```

### 字段说明：

| 字段名       | 类型   | 说明                                                                 |
|--------------|--------|----------------------------------------------------------------------|
| `table_style` | String | 指定表格内容的输出格式。可用值：<br>• `"html"`：以 HTML 表格形式返回，适合网页展示。<br>• `"md"`：以 Markdown 表格语法返回，适合文档或 Markdown 渲染环境。|
                     * 
                     */
                    std::string GetSplitRule() const;

                    /**
                     * 设置自定义切分规则

请求参数为一个 **JSON Object**，具体格式可参见接口示例值。包含以下主要字段：

| 字段名             | 类型      | 说明                                   |
|--------------------|--------|----------------------------------------|
| `xlsx_splitter`    | Object   | **Excel（xlsx）文件切分策略配置**，仅当处理 Excel 文件时有效 |
| `common_splitter`  | Object  | **通用文件（如 txt、pdf 等）切分策略配置**，按页或按标签切分 |
| `table_style`      | String | 表格内容的输出格式，如 HTML 或 Markdown |

---

## `xlsx_splitter`（Excel 切分策略）

用于配置 **表格文件的切分方式**。
**类型：Object**

```json
"xlsx_splitter": {
  "header_interval": [1, 2],
  "content_start": 10,
  "split_row": 2
}
```

### 字段说明：

| 字段名            | 类型   | 说明                                                                 |
|-------------------|--------|----------------------------------------------------------------------|
| `header_interval` | Array\<Number\>  | 表头所在的行区间，格式为 `[起始行, 结束行]`，**行号从 1 开始计数**。例如 `[1, 2]` 表示第 1~2 行为表头。 |
| `content_start`   | Number  | **表格内容的起始行号（从 1 开始）**。 |
| `split_row`       | Number   | **切分行数**。                   |

---
## `common_splitter`（通用文件切分策略）

用于配置 **非 Excel 文件（如 TXT、PDF、DOCX 等）的切分方式**，支持两种策略：**按页切分（page）** 或 **按标识符切分（tag）**。

**类型：Object**

```json
"common_splitter": {
  "splitter": "page",
  "page_splitter": {
    "chunk_length": 1000,
    "chunk_overlap_length": 100
  }
}
```

### 字段说明：

| 字段名            | 类型     | 说明                                                                 |
|-------------------|--------|---------------------------------------------------|
| `splitter`        | String  | 切分策略类型，可选值为：`"page"`（按页切分） 或 `"tag"`（按标识符切分）。 |
| `page_splitter`   | Object   | **按页切分的配置**。                                         |
| `page_splitter.chunk_length`   | 1000    | **切片最大长度**。              |
| `page_splitter.chunk_overlap_length`  | 100    | **切片重叠长度**。  |
| `tag_splitter`             | Object          | **自定义切分配置**。             |
| `tag_splitter.tag`         | Array\<String\>    | **切分标识符**。                             |
| `tag_splitter.chunk_length`| Number       | **切片最大长度**。                                                               |
| `tag_splitter.chunk_overlap_length` | Number    | **切块重叠长度**。                                                  |

🔹 **补充说明：**

- `splitter` 字段的值可以是：
  - `"page"`：只使用按页切分逻辑，此时只需要关心 `page_splitter` 相关字段。
  - `"tag"`：只使用按标识符（如分号、换行等）切分逻辑，此时关注 `tag_splitter`。
---

##  `table_style`（表格输出样式）

用于指定 **表格类内容（比如从 Excel 或 CSV 中提取的表格）最终以何种格式返回**，方便前端展示或后续处理。

**类型：String**

```json
"table_style": "md"
```

### 字段说明：

| 字段名       | 类型   | 说明                                                                 |
|--------------|--------|----------------------------------------------------------------------|
| `table_style` | String | 指定表格内容的输出格式。可用值：<br>• `"html"`：以 HTML 表格形式返回，适合网页展示。<br>• `"md"`：以 Markdown 表格语法返回，适合文档或 Markdown 渲染环境。|
                     * @param _splitRule 自定义切分规则

请求参数为一个 **JSON Object**，具体格式可参见接口示例值。包含以下主要字段：

| 字段名             | 类型      | 说明                                   |
|--------------------|--------|----------------------------------------|
| `xlsx_splitter`    | Object   | **Excel（xlsx）文件切分策略配置**，仅当处理 Excel 文件时有效 |
| `common_splitter`  | Object  | **通用文件（如 txt、pdf 等）切分策略配置**，按页或按标签切分 |
| `table_style`      | String | 表格内容的输出格式，如 HTML 或 Markdown |

---

## `xlsx_splitter`（Excel 切分策略）

用于配置 **表格文件的切分方式**。
**类型：Object**

```json
"xlsx_splitter": {
  "header_interval": [1, 2],
  "content_start": 10,
  "split_row": 2
}
```

### 字段说明：

| 字段名            | 类型   | 说明                                                                 |
|-------------------|--------|----------------------------------------------------------------------|
| `header_interval` | Array\<Number\>  | 表头所在的行区间，格式为 `[起始行, 结束行]`，**行号从 1 开始计数**。例如 `[1, 2]` 表示第 1~2 行为表头。 |
| `content_start`   | Number  | **表格内容的起始行号（从 1 开始）**。 |
| `split_row`       | Number   | **切分行数**。                   |

---
## `common_splitter`（通用文件切分策略）

用于配置 **非 Excel 文件（如 TXT、PDF、DOCX 等）的切分方式**，支持两种策略：**按页切分（page）** 或 **按标识符切分（tag）**。

**类型：Object**

```json
"common_splitter": {
  "splitter": "page",
  "page_splitter": {
    "chunk_length": 1000,
    "chunk_overlap_length": 100
  }
}
```

### 字段说明：

| 字段名            | 类型     | 说明                                                                 |
|-------------------|--------|---------------------------------------------------|
| `splitter`        | String  | 切分策略类型，可选值为：`"page"`（按页切分） 或 `"tag"`（按标识符切分）。 |
| `page_splitter`   | Object   | **按页切分的配置**。                                         |
| `page_splitter.chunk_length`   | 1000    | **切片最大长度**。              |
| `page_splitter.chunk_overlap_length`  | 100    | **切片重叠长度**。  |
| `tag_splitter`             | Object          | **自定义切分配置**。             |
| `tag_splitter.tag`         | Array\<String\>    | **切分标识符**。                             |
| `tag_splitter.chunk_length`| Number       | **切片最大长度**。                                                               |
| `tag_splitter.chunk_overlap_length` | Number    | **切块重叠长度**。                                                  |

🔹 **补充说明：**

- `splitter` 字段的值可以是：
  - `"page"`：只使用按页切分逻辑，此时只需要关心 `page_splitter` 相关字段。
  - `"tag"`：只使用按标识符（如分号、换行等）切分逻辑，此时关注 `tag_splitter`。
---

##  `table_style`（表格输出样式）

用于指定 **表格类内容（比如从 Excel 或 CSV 中提取的表格）最终以何种格式返回**，方便前端展示或后续处理。

**类型：String**

```json
"table_style": "md"
```

### 字段说明：

| 字段名       | 类型   | 说明                                                                 |
|--------------|--------|----------------------------------------------------------------------|
| `table_style` | String | 指定表格内容的输出格式。可用值：<br>• `"html"`：以 HTML 表格形式返回，适合网页展示。<br>• `"md"`：以 Markdown 表格语法返回，适合文档或 Markdown 渲染环境。|
                     * 
                     */
                    void SetSplitRule(const std::string& _splitRule);

                    /**
                     * 判断参数 SplitRule 是否已赋值
                     * @return SplitRule 是否已赋值
                     * 
                     */
                    bool SplitRuleHasBeenSet() const;

                    /**
                     * 获取文档更新频率，默认值为0不更新
                     * @return UpdatePeriodInfo 文档更新频率，默认值为0不更新
                     * 
                     */
                    UpdatePeriodInfo GetUpdatePeriodInfo() const;

                    /**
                     * 设置文档更新频率，默认值为0不更新
                     * @param _updatePeriodInfo 文档更新频率，默认值为0不更新
                     * 
                     */
                    void SetUpdatePeriodInfo(const UpdatePeriodInfo& _updatePeriodInfo);

                    /**
                     * 判断参数 UpdatePeriodInfo 是否已赋值
                     * @return UpdatePeriodInfo 是否已赋值
                     * 
                     */
                    bool UpdatePeriodInfoHasBeenSet() const;

                    /**
                     * 获取文档生效域: 1-停用；2-仅开发域；3-仅发布域；4-全域
                     * @return EnableScope 文档生效域: 1-停用；2-仅开发域；3-仅发布域；4-全域
                     * 
                     */
                    int64_t GetEnableScope() const;

                    /**
                     * 设置文档生效域: 1-停用；2-仅开发域；3-仅发布域；4-全域
                     * @param _enableScope 文档生效域: 1-停用；2-仅开发域；3-仅发布域；4-全域
                     * 
                     */
                    void SetEnableScope(const int64_t& _enableScope);

                    /**
                     * 判断参数 EnableScope 是否已赋值
                     * @return EnableScope 是否已赋值
                     * 
                     */
                    bool EnableScopeHasBeenSet() const;

                private:

                    /**
                     * 应用ID，获取方法参看[如何获取   BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * 文件名，需要包含文件扩展名
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
                     * 标签适用范围，1:全部，2:按条件。默认为1。
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
                     * 有效开始时间，unix秒级时间戳，默认为0
                     */
                    std::string m_expireStart;
                    bool m_expireStartHasBeenSet;

                    /**
                     * 有效结束时间，unix秒级时间戳，默认为0代表永久有效
                     */
                    std::string m_expireEnd;
                    bool m_expireEndHasBeenSet;

                    /**
                     * 是否显示引用的文档来源(false不显示 true显示）默认false
                     */
                    bool m_isRefer;
                    bool m_isReferHasBeenSet;

                    /**
                     * 文档操作类型：1：批量导入（批量导入问答对）；2:文档导入（正常导入单个文档） 默认为2 <br> 请注意，opt=1的时候请从腾讯云智能体开发平台页面下载excel模板
                     */
                    uint64_t m_opt;
                    bool m_optHasBeenSet;

                    /**
                     * 分类ID
                     */
                    std::string m_cateBizId;
                    bool m_cateBizIdHasBeenSet;

                    /**
                     * 是否可下载，IsRefer为true并且ReferUrlType为0时，该值才有意义
                     */
                    bool m_isDownload;
                    bool m_isDownloadHasBeenSet;

                    /**
                     * 重复文档处理方式，按顺序匹配第一个满足条件的方式处理
                     */
                    std::vector<DuplicateFileHandle> m_duplicateFileHandles;
                    bool m_duplicateFileHandlesHasBeenSet;

                    /**
                     * 自定义切分规则

请求参数为一个 **JSON Object**，具体格式可参见接口示例值。包含以下主要字段：

| 字段名             | 类型      | 说明                                   |
|--------------------|--------|----------------------------------------|
| `xlsx_splitter`    | Object   | **Excel（xlsx）文件切分策略配置**，仅当处理 Excel 文件时有效 |
| `common_splitter`  | Object  | **通用文件（如 txt、pdf 等）切分策略配置**，按页或按标签切分 |
| `table_style`      | String | 表格内容的输出格式，如 HTML 或 Markdown |

---

## `xlsx_splitter`（Excel 切分策略）

用于配置 **表格文件的切分方式**。
**类型：Object**

```json
"xlsx_splitter": {
  "header_interval": [1, 2],
  "content_start": 10,
  "split_row": 2
}
```

### 字段说明：

| 字段名            | 类型   | 说明                                                                 |
|-------------------|--------|----------------------------------------------------------------------|
| `header_interval` | Array\<Number\>  | 表头所在的行区间，格式为 `[起始行, 结束行]`，**行号从 1 开始计数**。例如 `[1, 2]` 表示第 1~2 行为表头。 |
| `content_start`   | Number  | **表格内容的起始行号（从 1 开始）**。 |
| `split_row`       | Number   | **切分行数**。                   |

---
## `common_splitter`（通用文件切分策略）

用于配置 **非 Excel 文件（如 TXT、PDF、DOCX 等）的切分方式**，支持两种策略：**按页切分（page）** 或 **按标识符切分（tag）**。

**类型：Object**

```json
"common_splitter": {
  "splitter": "page",
  "page_splitter": {
    "chunk_length": 1000,
    "chunk_overlap_length": 100
  }
}
```

### 字段说明：

| 字段名            | 类型     | 说明                                                                 |
|-------------------|--------|---------------------------------------------------|
| `splitter`        | String  | 切分策略类型，可选值为：`"page"`（按页切分） 或 `"tag"`（按标识符切分）。 |
| `page_splitter`   | Object   | **按页切分的配置**。                                         |
| `page_splitter.chunk_length`   | 1000    | **切片最大长度**。              |
| `page_splitter.chunk_overlap_length`  | 100    | **切片重叠长度**。  |
| `tag_splitter`             | Object          | **自定义切分配置**。             |
| `tag_splitter.tag`         | Array\<String\>    | **切分标识符**。                             |
| `tag_splitter.chunk_length`| Number       | **切片最大长度**。                                                               |
| `tag_splitter.chunk_overlap_length` | Number    | **切块重叠长度**。                                                  |

🔹 **补充说明：**

- `splitter` 字段的值可以是：
  - `"page"`：只使用按页切分逻辑，此时只需要关心 `page_splitter` 相关字段。
  - `"tag"`：只使用按标识符（如分号、换行等）切分逻辑，此时关注 `tag_splitter`。
---

##  `table_style`（表格输出样式）

用于指定 **表格类内容（比如从 Excel 或 CSV 中提取的表格）最终以何种格式返回**，方便前端展示或后续处理。

**类型：String**

```json
"table_style": "md"
```

### 字段说明：

| 字段名       | 类型   | 说明                                                                 |
|--------------|--------|----------------------------------------------------------------------|
| `table_style` | String | 指定表格内容的输出格式。可用值：<br>• `"html"`：以 HTML 表格形式返回，适合网页展示。<br>• `"md"`：以 Markdown 表格语法返回，适合文档或 Markdown 渲染环境。|
                     */
                    std::string m_splitRule;
                    bool m_splitRuleHasBeenSet;

                    /**
                     * 文档更新频率，默认值为0不更新
                     */
                    UpdatePeriodInfo m_updatePeriodInfo;
                    bool m_updatePeriodInfoHasBeenSet;

                    /**
                     * 文档生效域: 1-停用；2-仅开发域；3-仅发布域；4-全域
                     */
                    int64_t m_enableScope;
                    bool m_enableScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_SAVEDOCREQUEST_H_
