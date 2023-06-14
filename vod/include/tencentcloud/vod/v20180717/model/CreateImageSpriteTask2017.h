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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEIMAGESPRITETASK2017_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEIMAGESPRITETASK2017_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 视频截取雪碧图任务，该结构仅用于对 2017 版[截取雪碧图](https://cloud.tencent.com/document/product/266/8101)接口发起的任务。
                */
                class CreateImageSpriteTask2017 : public AbstractModel
                {
                public:
                    CreateImageSpriteTask2017();
                    ~CreateImageSpriteTask2017() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取截图雪碧图任务 ID。
                     * @return TaskId 截图雪碧图任务 ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置截图雪碧图任务 ID。
                     * @param _taskId 截图雪碧图任务 ID。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * @return ErrCode 错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * @param _errCode 错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * 
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取错误信息。
                     * @return Message 错误信息。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置错误信息。
                     * @param _message 错误信息。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取截取雪碧图文件 ID。
                     * @return FileId 截取雪碧图文件 ID。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置截取雪碧图文件 ID。
                     * @param _fileId 截取雪碧图文件 ID。
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取雪碧图规格，参见[雪碧图截图模板](https://cloud.tencent.com/document/product/266/33480#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF)。
                     * @return Definition 雪碧图规格，参见[雪碧图截图模板](https://cloud.tencent.com/document/product/266/33480#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF)。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置雪碧图规格，参见[雪碧图截图模板](https://cloud.tencent.com/document/product/266/33480#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF)。
                     * @param _definition 雪碧图规格，参见[雪碧图截图模板](https://cloud.tencent.com/document/product/266/33480#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF)。
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取雪碧图小图总数量。
                     * @return TotalCount 雪碧图小图总数量。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置雪碧图小图总数量。
                     * @param _totalCount 雪碧图小图总数量。
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取截取雪碧图输出的地址。
                     * @return ImageSpriteUrlSet 截取雪碧图输出的地址。
                     * 
                     */
                    std::vector<std::string> GetImageSpriteUrlSet() const;

                    /**
                     * 设置截取雪碧图输出的地址。
                     * @param _imageSpriteUrlSet 截取雪碧图输出的地址。
                     * 
                     */
                    void SetImageSpriteUrlSet(const std::vector<std::string>& _imageSpriteUrlSet);

                    /**
                     * 判断参数 ImageSpriteUrlSet 是否已赋值
                     * @return ImageSpriteUrlSet 是否已赋值
                     * 
                     */
                    bool ImageSpriteUrlSetHasBeenSet() const;

                    /**
                     * 获取雪碧图子图位置与时间关系 WebVtt 文件地址。
                     * @return WebVttUrl 雪碧图子图位置与时间关系 WebVtt 文件地址。
                     * 
                     */
                    std::string GetWebVttUrl() const;

                    /**
                     * 设置雪碧图子图位置与时间关系 WebVtt 文件地址。
                     * @param _webVttUrl 雪碧图子图位置与时间关系 WebVtt 文件地址。
                     * 
                     */
                    void SetWebVttUrl(const std::string& _webVttUrl);

                    /**
                     * 判断参数 WebVttUrl 是否已赋值
                     * @return WebVttUrl 是否已赋值
                     * 
                     */
                    bool WebVttUrlHasBeenSet() const;

                private:

                    /**
                     * 截图雪碧图任务 ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 错误信息。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 截取雪碧图文件 ID。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 雪碧图规格，参见[雪碧图截图模板](https://cloud.tencent.com/document/product/266/33480#.E9.9B.AA.E7.A2.A7.E5.9B.BE.E6.A8.A1.E6.9D.BF)。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 雪碧图小图总数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 截取雪碧图输出的地址。
                     */
                    std::vector<std::string> m_imageSpriteUrlSet;
                    bool m_imageSpriteUrlSetHasBeenSet;

                    /**
                     * 雪碧图子图位置与时间关系 WebVtt 文件地址。
                     */
                    std::string m_webVttUrl;
                    bool m_webVttUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEIMAGESPRITETASK2017_H_
