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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTDOCITEM_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTDOCITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AttrLabel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 文档列表详情描述
                */
                class ListDocItem : public AbstractModel
                {
                public:
                    ListDocItem();
                    ~ListDocItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文档ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocBizId 文档ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 设置文档ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _docBizId 文档ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDocBizId(const std::string& _docBizId);

                    /**
                     * 判断参数 DocBizId 是否已赋值
                     * @return DocBizId 是否已赋值
                     * 
                     */
                    bool DocBizIdHasBeenSet() const;

                    /**
                     * 获取文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileName 文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileName 文件名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取重命名的新文档名称，在重命名提交之后，文档发布之前都是这个名称
                     * @return NewName 重命名的新文档名称，在重命名提交之后，文档发布之前都是这个名称
                     * 
                     */
                    std::string GetNewName() const;

                    /**
                     * 设置重命名的新文档名称，在重命名提交之后，文档发布之前都是这个名称
                     * @param _newName 重命名的新文档名称，在重命名提交之后，文档发布之前都是这个名称
                     * 
                     */
                    void SetNewName(const std::string& _newName);

                    /**
                     * 判断参数 NewName 是否已赋值
                     * @return NewName 是否已赋值
                     * 
                     */
                    bool NewNameHasBeenSet() const;

                    /**
                     * 获取文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileType 文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileType 文件类型
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosUrl cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosUrl() const;

                    /**
                     * 设置cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosUrl cos路径
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取文档状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 文档状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置文档状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 文档状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取文档状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusDesc 文档状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置文档状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusDesc 文档状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reason 原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reason 原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取答案中是否引用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsRefer 答案中是否引用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsRefer() const;

                    /**
                     * 设置答案中是否引用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isRefer 答案中是否引用
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取问答对数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QaNum 问答对数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetQaNum() const;

                    /**
                     * 设置问答对数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qaNum 问答对数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQaNum(const int64_t& _qaNum);

                    /**
                     * 判断参数 QaNum 是否已赋值
                     * @return QaNum 是否已赋值
                     * 
                     */
                    bool QaNumHasBeenSet() const;

                    /**
                     * 获取是否已删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDeleted 是否已删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsDeleted() const;

                    /**
                     * 设置是否已删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isDeleted 是否已删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsDeleted(const bool& _isDeleted);

                    /**
                     * 判断参数 IsDeleted 是否已赋值
                     * @return IsDeleted 是否已赋值
                     * 
                     */
                    bool IsDeletedHasBeenSet() const;

                    /**
                     * 获取文档来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source 文档来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置文档来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _source 文档来源
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取文档来源描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceDesc 文档来源描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceDesc() const;

                    /**
                     * 设置文档来源描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceDesc 文档来源描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceDesc(const std::string& _sourceDesc);

                    /**
                     * 判断参数 SourceDesc 是否已赋值
                     * @return SourceDesc 是否已赋值
                     * 
                     */
                    bool SourceDescHasBeenSet() const;

                    /**
                     * 获取是否允许重新生成
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAllowRestart 是否允许重新生成
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsAllowRestart() const;

                    /**
                     * 设置是否允许重新生成
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isAllowRestart 是否允许重新生成
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsAllowRestart(const bool& _isAllowRestart);

                    /**
                     * 判断参数 IsAllowRestart 是否已赋值
                     * @return IsAllowRestart 是否已赋值
                     * 
                     */
                    bool IsAllowRestartHasBeenSet() const;

                    /**
                     * 获取qa是否已删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsDeletedQa qa是否已删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsDeletedQa() const;

                    /**
                     * 设置qa是否已删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isDeletedQa qa是否已删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsDeletedQa(const bool& _isDeletedQa);

                    /**
                     * 判断参数 IsDeletedQa 是否已赋值
                     * @return IsDeletedQa 是否已赋值
                     * 
                     */
                    bool IsDeletedQaHasBeenSet() const;

                    /**
                     * 获取问答是否生成中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsCreatingQa 问答是否生成中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsCreatingQa() const;

                    /**
                     * 设置问答是否生成中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isCreatingQa 问答是否生成中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsCreatingQa(const bool& _isCreatingQa);

                    /**
                     * 判断参数 IsCreatingQa 是否已赋值
                     * @return IsCreatingQa 是否已赋值
                     * 
                     */
                    bool IsCreatingQaHasBeenSet() const;

                    /**
                     * 获取是否允许删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAllowDelete 是否允许删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsAllowDelete() const;

                    /**
                     * 设置是否允许删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isAllowDelete 是否允许删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsAllowDelete(const bool& _isAllowDelete);

                    /**
                     * 判断参数 IsAllowDelete 是否已赋值
                     * @return IsAllowDelete 是否已赋值
                     * 
                     */
                    bool IsAllowDeleteHasBeenSet() const;

                    /**
                     * 获取是否允许操作引用开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAllowRefer 是否允许操作引用开关
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsAllowRefer() const;

                    /**
                     * 设置是否允许操作引用开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isAllowRefer 是否允许操作引用开关
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsAllowRefer(const bool& _isAllowRefer);

                    /**
                     * 判断参数 IsAllowRefer 是否已赋值
                     * @return IsAllowRefer 是否已赋值
                     * 
                     */
                    bool IsAllowReferHasBeenSet() const;

                    /**
                     * 获取问答是否生成过
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsCreatedQa 问答是否生成过
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsCreatedQa() const;

                    /**
                     * 设置问答是否生成过
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isCreatedQa 问答是否生成过
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsCreatedQa(const bool& _isCreatedQa);

                    /**
                     * 判断参数 IsCreatedQa 是否已赋值
                     * @return IsCreatedQa 是否已赋值
                     * 
                     */
                    bool IsCreatedQaHasBeenSet() const;

                    /**
                     * 获取文档字符量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocCharSize 文档字符量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDocCharSize() const;

                    /**
                     * 设置文档字符量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _docCharSize 文档字符量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDocCharSize(const std::string& _docCharSize);

                    /**
                     * 判断参数 DocCharSize 是否已赋值
                     * @return DocCharSize 是否已赋值
                     * 
                     */
                    bool DocCharSizeHasBeenSet() const;

                    /**
                     * 获取属性标签适用范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttrRange 属性标签适用范围
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAttrRange() const;

                    /**
                     * 设置属性标签适用范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attrRange 属性标签适用范围
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取属性标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttrLabels 属性标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AttrLabel> GetAttrLabels() const;

                    /**
                     * 设置属性标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attrLabels 属性标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttrLabels(const std::vector<AttrLabel>& _attrLabels);

                    /**
                     * 判断参数 AttrLabels 是否已赋值
                     * @return AttrLabels 是否已赋值
                     * 
                     */
                    bool AttrLabelsHasBeenSet() const;

                    /**
                     * 获取是否允许编辑
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAllowEdit 是否允许编辑
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsAllowEdit() const;

                    /**
                     * 设置是否允许编辑
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isAllowEdit 是否允许编辑
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsAllowEdit(const bool& _isAllowEdit);

                    /**
                     * 判断参数 IsAllowEdit 是否已赋值
                     * @return IsAllowEdit 是否已赋值
                     * 
                     */
                    bool IsAllowEditHasBeenSet() const;

                    /**
                     * 获取外部引用链接类型 0：系统链接 1：自定义链接
值为1时，WebUrl 字段不能为空，否则不生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReferUrlType 外部引用链接类型 0：系统链接 1：自定义链接
值为1时，WebUrl 字段不能为空，否则不生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetReferUrlType() const;

                    /**
                     * 设置外部引用链接类型 0：系统链接 1：自定义链接
值为1时，WebUrl 字段不能为空，否则不生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _referUrlType 外部引用链接类型 0：系统链接 1：自定义链接
值为1时，WebUrl 字段不能为空，否则不生效。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取网页(或自定义链接)地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebUrl 网页(或自定义链接)地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWebUrl() const;

                    /**
                     * 设置网页(或自定义链接)地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webUrl 网页(或自定义链接)地址
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取有效开始时间，unix时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireStart 有效开始时间，unix时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireStart() const;

                    /**
                     * 设置有效开始时间，unix时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireStart 有效开始时间，unix时间戳
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireEnd 有效结束时间，unix时间戳，0代表永久有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireEnd() const;

                    /**
                     * 设置有效结束时间，unix时间戳，0代表永久有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireEnd 有效结束时间，unix时间戳，0代表永久有效
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否允许重试，0：否，1：是
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsAllowRetry 是否允许重试，0：否，1：是
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsAllowRetry() const;

                    /**
                     * 设置是否允许重试，0：否，1：是
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isAllowRetry 是否允许重试，0：否，1：是
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsAllowRetry(const bool& _isAllowRetry);

                    /**
                     * 判断参数 IsAllowRetry 是否已赋值
                     * @return IsAllowRetry 是否已赋值
                     * 
                     */
                    bool IsAllowRetryHasBeenSet() const;

                    /**
                     * 获取0:文档比对处理 1:文档生成问答
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Processing 0:文档比对处理 1:文档生成问答
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetProcessing() const;

                    /**
                     * 设置0:文档比对处理 1:文档生成问答
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processing 0:文档比对处理 1:文档生成问答
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessing(const std::vector<int64_t>& _processing);

                    /**
                     * 判断参数 Processing 是否已赋值
                     * @return Processing 是否已赋值
                     * 
                     */
                    bool ProcessingHasBeenSet() const;

                    /**
                     * 获取文档创建落库时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 文档创建落库时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置文档创建落库时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 文档创建落库时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取文档所属分类ID
                     * @return CateBizId 文档所属分类ID
                     * 
                     */
                    std::string GetCateBizId() const;

                    /**
                     * 设置文档所属分类ID
                     * @param _cateBizId 文档所属分类ID
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
                     * 获取文档的用户自定义ID
                     * @return CustomerKnowledgeId 文档的用户自定义ID
                     * 
                     */
                    std::string GetCustomerKnowledgeId() const;

                    /**
                     * 设置文档的用户自定义ID
                     * @param _customerKnowledgeId 文档的用户自定义ID
                     * 
                     */
                    void SetCustomerKnowledgeId(const std::string& _customerKnowledgeId);

                    /**
                     * 判断参数 CustomerKnowledgeId 是否已赋值
                     * @return CustomerKnowledgeId 是否已赋值
                     * 
                     */
                    bool CustomerKnowledgeIdHasBeenSet() const;

                    /**
                     * 获取文档的属性标记，0: 不做用户外部权限校验
                     * @return AttributeFlags 文档的属性标记，0: 不做用户外部权限校验
                     * 
                     */
                    std::vector<uint64_t> GetAttributeFlags() const;

                    /**
                     * 设置文档的属性标记，0: 不做用户外部权限校验
                     * @param _attributeFlags 文档的属性标记，0: 不做用户外部权限校验
                     * 
                     */
                    void SetAttributeFlags(const std::vector<uint64_t>& _attributeFlags);

                    /**
                     * 判断参数 AttributeFlags 是否已赋值
                     * @return AttributeFlags 是否已赋值
                     * 
                     */
                    bool AttributeFlagsHasBeenSet() const;

                    /**
                     * 获取false:未停用，ture:已停用
                     * @return IsDisabled false:未停用，ture:已停用
                     * 
                     */
                    bool GetIsDisabled() const;

                    /**
                     * 设置false:未停用，ture:已停用
                     * @param _isDisabled false:未停用，ture:已停用
                     * 
                     */
                    void SetIsDisabled(const bool& _isDisabled);

                    /**
                     * 判断参数 IsDisabled 是否已赋值
                     * @return IsDisabled 是否已赋值
                     * 
                     */
                    bool IsDisabledHasBeenSet() const;

                private:

                    /**
                     * 文档ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * 文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 重命名的新文档名称，在重命名提交之后，文档发布之前都是这个名称
                     */
                    std::string m_newName;
                    bool m_newNameHasBeenSet;

                    /**
                     * 文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * cos路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosUrl;
                    bool m_cosUrlHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 文档状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 文档状态描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 答案中是否引用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isRefer;
                    bool m_isReferHasBeenSet;

                    /**
                     * 问答对数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_qaNum;
                    bool m_qaNumHasBeenSet;

                    /**
                     * 是否已删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isDeleted;
                    bool m_isDeletedHasBeenSet;

                    /**
                     * 文档来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 文档来源描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceDesc;
                    bool m_sourceDescHasBeenSet;

                    /**
                     * 是否允许重新生成
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isAllowRestart;
                    bool m_isAllowRestartHasBeenSet;

                    /**
                     * qa是否已删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isDeletedQa;
                    bool m_isDeletedQaHasBeenSet;

                    /**
                     * 问答是否生成中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isCreatingQa;
                    bool m_isCreatingQaHasBeenSet;

                    /**
                     * 是否允许删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isAllowDelete;
                    bool m_isAllowDeleteHasBeenSet;

                    /**
                     * 是否允许操作引用开关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isAllowRefer;
                    bool m_isAllowReferHasBeenSet;

                    /**
                     * 问答是否生成过
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isCreatedQa;
                    bool m_isCreatedQaHasBeenSet;

                    /**
                     * 文档字符量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_docCharSize;
                    bool m_docCharSizeHasBeenSet;

                    /**
                     * 属性标签适用范围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_attrRange;
                    bool m_attrRangeHasBeenSet;

                    /**
                     * 属性标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AttrLabel> m_attrLabels;
                    bool m_attrLabelsHasBeenSet;

                    /**
                     * 是否允许编辑
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isAllowEdit;
                    bool m_isAllowEditHasBeenSet;

                    /**
                     * 外部引用链接类型 0：系统链接 1：自定义链接
值为1时，WebUrl 字段不能为空，否则不生效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_referUrlType;
                    bool m_referUrlTypeHasBeenSet;

                    /**
                     * 网页(或自定义链接)地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_webUrl;
                    bool m_webUrlHasBeenSet;

                    /**
                     * 有效开始时间，unix时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireStart;
                    bool m_expireStartHasBeenSet;

                    /**
                     * 有效结束时间，unix时间戳，0代表永久有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireEnd;
                    bool m_expireEndHasBeenSet;

                    /**
                     * 是否允许重试，0：否，1：是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isAllowRetry;
                    bool m_isAllowRetryHasBeenSet;

                    /**
                     * 0:文档比对处理 1:文档生成问答
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_processing;
                    bool m_processingHasBeenSet;

                    /**
                     * 文档创建落库时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 文档所属分类ID
                     */
                    std::string m_cateBizId;
                    bool m_cateBizIdHasBeenSet;

                    /**
                     * 文档的用户自定义ID
                     */
                    std::string m_customerKnowledgeId;
                    bool m_customerKnowledgeIdHasBeenSet;

                    /**
                     * 文档的属性标记，0: 不做用户外部权限校验
                     */
                    std::vector<uint64_t> m_attributeFlags;
                    bool m_attributeFlagsHasBeenSet;

                    /**
                     * false:未停用，ture:已停用
                     */
                    bool m_isDisabled;
                    bool m_isDisabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTDOCITEM_H_
