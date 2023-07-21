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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBETRANSCODERESPONSE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBETRANSCODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeTranscode返回参数结构体
                */
                class DescribeTranscodeResponse : public AbstractModel
                {
                public:
                    DescribeTranscodeResponse();
                    ~DescribeTranscodeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文档的总页数
                     * @return Pages 文档的总页数
                     * 
                     */
                    int64_t GetPages() const;

                    /**
                     * 判断参数 Pages 是否已赋值
                     * @return Pages 是否已赋值
                     * 
                     */
                    bool PagesHasBeenSet() const;

                    /**
                     * 获取转码的当前进度,取值范围为0~100
                     * @return Progress 转码的当前进度,取值范围为0~100
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取文档的分辨率
                     * @return Resolution 文档的分辨率
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取转码完成后结果的URL
动态转码：PPT转动态H5的链接
静态转码：文档每一页的图片URL前缀，比如，该URL前缀为`http://example.com/g0jb42ps49vtebjshilb/`，那么文档第1页的图片URL为
`http://example.com/g0jb42ps49vtebjshilb/1.jpg`，其它页以此类推
                     * @return ResultUrl 转码完成后结果的URL
动态转码：PPT转动态H5的链接
静态转码：文档每一页的图片URL前缀，比如，该URL前缀为`http://example.com/g0jb42ps49vtebjshilb/`，那么文档第1页的图片URL为
`http://example.com/g0jb42ps49vtebjshilb/1.jpg`，其它页以此类推
                     * 
                     */
                    std::string GetResultUrl() const;

                    /**
                     * 判断参数 ResultUrl 是否已赋值
                     * @return ResultUrl 是否已赋值
                     * 
                     */
                    bool ResultUrlHasBeenSet() const;

                    /**
                     * 获取任务的当前状态
- QUEUED: 正在排队等待转换
- PROCESSING: 转换中
- FINISHED: 转换完成
                     * @return Status 任务的当前状态
- QUEUED: 正在排队等待转换
- PROCESSING: 转换中
- FINISHED: 转换完成
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取转码任务的唯一标识Id
                     * @return TaskId 转码任务的唯一标识Id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取文档的文件名
                     * @return Title 文档的文件名
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取缩略图URL前缀，比如，该URL前缀为`http://example.com/g0jb42ps49vtebjshilb/ `，那么动态PPT第1页的缩略图URL为
`http://example.com/g0jb42ps49vtebjshilb/1.jpg`，其它页以此类推

如果发起文档转码请求参数中带了ThumbnailResolution参数，并且转码类型为动态转码，该参数不为空，其余情况该参数为空字符串
                     * @return ThumbnailUrl 缩略图URL前缀，比如，该URL前缀为`http://example.com/g0jb42ps49vtebjshilb/ `，那么动态PPT第1页的缩略图URL为
`http://example.com/g0jb42ps49vtebjshilb/1.jpg`，其它页以此类推

如果发起文档转码请求参数中带了ThumbnailResolution参数，并且转码类型为动态转码，该参数不为空，其余情况该参数为空字符串
                     * 
                     */
                    std::string GetThumbnailUrl() const;

                    /**
                     * 判断参数 ThumbnailUrl 是否已赋值
                     * @return ThumbnailUrl 是否已赋值
                     * 
                     */
                    bool ThumbnailUrlHasBeenSet() const;

                    /**
                     * 获取动态转码缩略图生成分辨率
                     * @return ThumbnailResolution 动态转码缩略图生成分辨率
                     * 
                     */
                    std::string GetThumbnailResolution() const;

                    /**
                     * 判断参数 ThumbnailResolution 是否已赋值
                     * @return ThumbnailResolution 是否已赋值
                     * 
                     */
                    bool ThumbnailResolutionHasBeenSet() const;

                    /**
                     * 获取转码压缩文件下载的URL，如果发起文档转码请求参数中`CompressFileType`为空或者不是支持的压缩格式，该参数为空字符串
                     * @return CompressFileUrl 转码压缩文件下载的URL，如果发起文档转码请求参数中`CompressFileType`为空或者不是支持的压缩格式，该参数为空字符串
                     * 
                     */
                    std::string GetCompressFileUrl() const;

                    /**
                     * 判断参数 CompressFileUrl 是否已赋值
                     * @return CompressFileUrl 是否已赋值
                     * 
                     */
                    bool CompressFileUrlHasBeenSet() const;

                    /**
                     * 获取资源清单文件下载URL(内测体验)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceListUrl 资源清单文件下载URL(内测体验)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceListUrl() const;

                    /**
                     * 判断参数 ResourceListUrl 是否已赋值
                     * @return ResourceListUrl 是否已赋值
                     * 
                     */
                    bool ResourceListUrlHasBeenSet() const;

                    /**
                     * 获取文档制作方式(内测体验)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ext 文档制作方式(内测体验)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExt() const;

                    /**
                     * 判断参数 Ext 是否已赋值
                     * @return Ext 是否已赋值
                     * 
                     */
                    bool ExtHasBeenSet() const;

                    /**
                     * 获取文档转码任务创建时间，单位s
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 文档转码任务创建时间，单位s
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取文档转码任务分配时间，单位s
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssignTime 文档转码任务分配时间，单位s
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAssignTime() const;

                    /**
                     * 判断参数 AssignTime 是否已赋值
                     * @return AssignTime 是否已赋值
                     * 
                     */
                    bool AssignTimeHasBeenSet() const;

                    /**
                     * 获取文档转码任务完成时间，单位s
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinishedTime 文档转码任务完成时间，单位s
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFinishedTime() const;

                    /**
                     * 判断参数 FinishedTime 是否已赋值
                     * @return FinishedTime 是否已赋值
                     * 
                     */
                    bool FinishedTimeHasBeenSet() const;

                private:

                    /**
                     * 文档的总页数
                     */
                    int64_t m_pages;
                    bool m_pagesHasBeenSet;

                    /**
                     * 转码的当前进度,取值范围为0~100
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 文档的分辨率
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 转码完成后结果的URL
动态转码：PPT转动态H5的链接
静态转码：文档每一页的图片URL前缀，比如，该URL前缀为`http://example.com/g0jb42ps49vtebjshilb/`，那么文档第1页的图片URL为
`http://example.com/g0jb42ps49vtebjshilb/1.jpg`，其它页以此类推
                     */
                    std::string m_resultUrl;
                    bool m_resultUrlHasBeenSet;

                    /**
                     * 任务的当前状态
- QUEUED: 正在排队等待转换
- PROCESSING: 转换中
- FINISHED: 转换完成
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 转码任务的唯一标识Id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 文档的文件名
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 缩略图URL前缀，比如，该URL前缀为`http://example.com/g0jb42ps49vtebjshilb/ `，那么动态PPT第1页的缩略图URL为
`http://example.com/g0jb42ps49vtebjshilb/1.jpg`，其它页以此类推

如果发起文档转码请求参数中带了ThumbnailResolution参数，并且转码类型为动态转码，该参数不为空，其余情况该参数为空字符串
                     */
                    std::string m_thumbnailUrl;
                    bool m_thumbnailUrlHasBeenSet;

                    /**
                     * 动态转码缩略图生成分辨率
                     */
                    std::string m_thumbnailResolution;
                    bool m_thumbnailResolutionHasBeenSet;

                    /**
                     * 转码压缩文件下载的URL，如果发起文档转码请求参数中`CompressFileType`为空或者不是支持的压缩格式，该参数为空字符串
                     */
                    std::string m_compressFileUrl;
                    bool m_compressFileUrlHasBeenSet;

                    /**
                     * 资源清单文件下载URL(内测体验)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceListUrl;
                    bool m_resourceListUrlHasBeenSet;

                    /**
                     * 文档制作方式(内测体验)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ext;
                    bool m_extHasBeenSet;

                    /**
                     * 文档转码任务创建时间，单位s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 文档转码任务分配时间，单位s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_assignTime;
                    bool m_assignTimeHasBeenSet;

                    /**
                     * 文档转码任务完成时间，单位s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_finishedTime;
                    bool m_finishedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBETRANSCODERESPONSE_H_
