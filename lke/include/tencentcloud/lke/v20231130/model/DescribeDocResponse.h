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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEDOCRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEDOCRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeDoc返回参数结构体
                */
                class DescribeDocResponse : public AbstractModel
                {
                public:
                    DescribeDocResponse();
                    ~DescribeDocResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文档ID
                     * @return DocBizId 文档ID
                     * 
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 判断参数 DocBizId 是否已赋值
                     * @return DocBizId 是否已赋值
                     * 
                     */
                    bool DocBizIdHasBeenSet() const;

                    /**
                     * 获取文件名称
                     * @return FileName 文件名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取文件类型
                     * @return FileType 文件类型
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取cos路径
                     * @return CosUrl cos路径
                     * 
                     */
                    std::string GetCosUrl() const;

                    /**
                     * 判断参数 CosUrl 是否已赋值
                     * @return CosUrl 是否已赋值
                     * 
                     */
                    bool CosUrlHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取文档状态： 1-未生成 2-生成中 3-生成成功 4-生成失败 5-删除中 6-删除成功 7-审核中 8-审核失败 9-审核成功 10-待发布 11-发布中 12-已发布 13-学习中 14-学习失败 15-更新中 16-更新失败 17-解析中 18-解析失败 19-导入失败 20-已过期 21-超量失效 22-超量失效恢复
                     * @return Status 文档状态： 1-未生成 2-生成中 3-生成成功 4-生成失败 5-删除中 6-删除成功 7-审核中 8-审核失败 9-审核成功 10-待发布 11-发布中 12-已发布 13-学习中 14-学习失败 15-更新中 16-更新失败 17-解析中 18-解析失败 19-导入失败 20-已过期 21-超量失效 22-超量失效恢复
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取文档状态描述
                     * @return StatusDesc 文档状态描述
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取生成失败原因
                     * @return Reason 生成失败原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取答案中是否引用
                     * @return IsRefer 答案中是否引用
                     * 
                     */
                    bool GetIsRefer() const;

                    /**
                     * 判断参数 IsRefer 是否已赋值
                     * @return IsRefer 是否已赋值
                     * 
                     */
                    bool IsReferHasBeenSet() const;

                    /**
                     * 获取问答对数量
                     * @return QaNum 问答对数量
                     * 
                     */
                    int64_t GetQaNum() const;

                    /**
                     * 判断参数 QaNum 是否已赋值
                     * @return QaNum 是否已赋值
                     * 
                     */
                    bool QaNumHasBeenSet() const;

                    /**
                     * 获取是否删除
                     * @return IsDeleted 是否删除
                     * 
                     */
                    bool GetIsDeleted() const;

                    /**
                     * 判断参数 IsDeleted 是否已赋值
                     * @return IsDeleted 是否已赋值
                     * 
                     */
                    bool IsDeletedHasBeenSet() const;

                    /**
                     * 获取文档来源
                     * @return Source 文档来源
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取文档来源描述
                     * @return SourceDesc 文档来源描述
                     * 
                     */
                    std::string GetSourceDesc() const;

                    /**
                     * 判断参数 SourceDesc 是否已赋值
                     * @return SourceDesc 是否已赋值
                     * 
                     */
                    bool SourceDescHasBeenSet() const;

                    /**
                     * 获取是否允许重新生成
                     * @return IsAllowRestart 是否允许重新生成
                     * 
                     */
                    bool GetIsAllowRestart() const;

                    /**
                     * 判断参数 IsAllowRestart 是否已赋值
                     * @return IsAllowRestart 是否已赋值
                     * 
                     */
                    bool IsAllowRestartHasBeenSet() const;

                    /**
                     * 获取qa是否已删除
                     * @return IsDeletedQa qa是否已删除
                     * 
                     */
                    bool GetIsDeletedQa() const;

                    /**
                     * 判断参数 IsDeletedQa 是否已赋值
                     * @return IsDeletedQa 是否已赋值
                     * 
                     */
                    bool IsDeletedQaHasBeenSet() const;

                    /**
                     * 获取问答是否生成中
                     * @return IsCreatingQa 问答是否生成中
                     * 
                     */
                    bool GetIsCreatingQa() const;

                    /**
                     * 判断参数 IsCreatingQa 是否已赋值
                     * @return IsCreatingQa 是否已赋值
                     * 
                     */
                    bool IsCreatingQaHasBeenSet() const;

                    /**
                     * 获取是否允许删除
                     * @return IsAllowDelete 是否允许删除
                     * 
                     */
                    bool GetIsAllowDelete() const;

                    /**
                     * 判断参数 IsAllowDelete 是否已赋值
                     * @return IsAllowDelete 是否已赋值
                     * 
                     */
                    bool IsAllowDeleteHasBeenSet() const;

                    /**
                     * 获取是否允许操作引用开关
                     * @return IsAllowRefer 是否允许操作引用开关
                     * 
                     */
                    bool GetIsAllowRefer() const;

                    /**
                     * 判断参数 IsAllowRefer 是否已赋值
                     * @return IsAllowRefer 是否已赋值
                     * 
                     */
                    bool IsAllowReferHasBeenSet() const;

                    /**
                     * 获取是否生成过问答
                     * @return IsCreatedQa 是否生成过问答
                     * 
                     */
                    bool GetIsCreatedQa() const;

                    /**
                     * 判断参数 IsCreatedQa 是否已赋值
                     * @return IsCreatedQa 是否已赋值
                     * 
                     */
                    bool IsCreatedQaHasBeenSet() const;

                    /**
                     * 获取文档字符量
                     * @return DocCharSize 文档字符量
                     * 
                     */
                    std::string GetDocCharSize() const;

                    /**
                     * 判断参数 DocCharSize 是否已赋值
                     * @return DocCharSize 是否已赋值
                     * 
                     */
                    bool DocCharSizeHasBeenSet() const;

                    /**
                     * 获取是否允许编辑
                     * @return IsAllowEdit 是否允许编辑
                     * 
                     */
                    bool GetIsAllowEdit() const;

                    /**
                     * 判断参数 IsAllowEdit 是否已赋值
                     * @return IsAllowEdit 是否已赋值
                     * 
                     */
                    bool IsAllowEditHasBeenSet() const;

                    /**
                     * 获取标签适用范围 1：全部，2：按条件范围
                     * @return AttrRange 标签适用范围 1：全部，2：按条件范围
                     * 
                     */
                    int64_t GetAttrRange() const;

                    /**
                     * 判断参数 AttrRange 是否已赋值
                     * @return AttrRange 是否已赋值
                     * 
                     */
                    bool AttrRangeHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return AttrLabels 标签
                     * 
                     */
                    std::vector<AttrLabel> GetAttrLabels() const;

                    /**
                     * 判断参数 AttrLabels 是否已赋值
                     * @return AttrLabels 是否已赋值
                     * 
                     */
                    bool AttrLabelsHasBeenSet() const;

                    /**
                     * 获取分类ID
                     * @return CateBizId 分类ID
                     * 
                     */
                    std::string GetCateBizId() const;

                    /**
                     * 判断参数 CateBizId 是否已赋值
                     * @return CateBizId 是否已赋值
                     * 
                     */
                    bool CateBizIdHasBeenSet() const;

                    /**
                     * 获取文档是否停用，false:未停用，true:已停用
                     * @return IsDisabled 文档是否停用，false:未停用，true:已停用
                     * 
                     */
                    bool GetIsDisabled() const;

                    /**
                     * 判断参数 IsDisabled 是否已赋值
                     * @return IsDisabled 是否已赋值
                     * 
                     */
                    bool IsDisabledHasBeenSet() const;

                private:

                    /**
                     * 文档ID
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * 文件名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件类型
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * cos路径
                     */
                    std::string m_cosUrl;
                    bool m_cosUrlHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 文档状态： 1-未生成 2-生成中 3-生成成功 4-生成失败 5-删除中 6-删除成功 7-审核中 8-审核失败 9-审核成功 10-待发布 11-发布中 12-已发布 13-学习中 14-学习失败 15-更新中 16-更新失败 17-解析中 18-解析失败 19-导入失败 20-已过期 21-超量失效 22-超量失效恢复
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 文档状态描述
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * 生成失败原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 答案中是否引用
                     */
                    bool m_isRefer;
                    bool m_isReferHasBeenSet;

                    /**
                     * 问答对数量
                     */
                    int64_t m_qaNum;
                    bool m_qaNumHasBeenSet;

                    /**
                     * 是否删除
                     */
                    bool m_isDeleted;
                    bool m_isDeletedHasBeenSet;

                    /**
                     * 文档来源
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 文档来源描述
                     */
                    std::string m_sourceDesc;
                    bool m_sourceDescHasBeenSet;

                    /**
                     * 是否允许重新生成
                     */
                    bool m_isAllowRestart;
                    bool m_isAllowRestartHasBeenSet;

                    /**
                     * qa是否已删除
                     */
                    bool m_isDeletedQa;
                    bool m_isDeletedQaHasBeenSet;

                    /**
                     * 问答是否生成中
                     */
                    bool m_isCreatingQa;
                    bool m_isCreatingQaHasBeenSet;

                    /**
                     * 是否允许删除
                     */
                    bool m_isAllowDelete;
                    bool m_isAllowDeleteHasBeenSet;

                    /**
                     * 是否允许操作引用开关
                     */
                    bool m_isAllowRefer;
                    bool m_isAllowReferHasBeenSet;

                    /**
                     * 是否生成过问答
                     */
                    bool m_isCreatedQa;
                    bool m_isCreatedQaHasBeenSet;

                    /**
                     * 文档字符量
                     */
                    std::string m_docCharSize;
                    bool m_docCharSizeHasBeenSet;

                    /**
                     * 是否允许编辑
                     */
                    bool m_isAllowEdit;
                    bool m_isAllowEditHasBeenSet;

                    /**
                     * 标签适用范围 1：全部，2：按条件范围
                     */
                    int64_t m_attrRange;
                    bool m_attrRangeHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<AttrLabel> m_attrLabels;
                    bool m_attrLabelsHasBeenSet;

                    /**
                     * 分类ID
                     */
                    std::string m_cateBizId;
                    bool m_cateBizIdHasBeenSet;

                    /**
                     * 文档是否停用，false:未停用，true:已停用
                     */
                    bool m_isDisabled;
                    bool m_isDisabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEDOCRESPONSE_H_
