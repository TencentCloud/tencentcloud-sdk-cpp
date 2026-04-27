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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCUSAGEDATAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCUSAGEDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeAigcUsageData请求参数结构体
                */
                class DescribeAigcUsageDataRequest : public AbstractModel
                {
                public:
                    DescribeAigcUsageDataRequest();
                    ~DescribeAigcUsageDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>起始日期。使用 <a href="https://cloud.tencent.com/document/product/266/11732#52">ISO 日期格式</a>。</p>
                     * @return StartTime <p>起始日期。使用 <a href="https://cloud.tencent.com/document/product/266/11732#52">ISO 日期格式</a>。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>起始日期。使用 <a href="https://cloud.tencent.com/document/product/266/11732#52">ISO 日期格式</a>。</p>
                     * @param _startTime <p>起始日期。使用 <a href="https://cloud.tencent.com/document/product/266/11732#52">ISO 日期格式</a>。</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束日期，需大于等于起始日期。使用 <a href="https://cloud.tencent.com/document/product/266/11732#52">ISO 日期格式</a>。</p>
                     * @return EndTime <p>结束日期，需大于等于起始日期。使用 <a href="https://cloud.tencent.com/document/product/266/11732#52">ISO 日期格式</a>。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束日期，需大于等于起始日期。使用 <a href="https://cloud.tencent.com/document/product/266/11732#52">ISO 日期格式</a>。</p>
                     * @param _endTime <p>结束日期，需大于等于起始日期。使用 <a href="https://cloud.tencent.com/document/product/266/11732#52">ISO 日期格式</a>。</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>AIGC类型。</p><p>枚举值：</p><ul><li>Video： 视频</li><li>Image： 图片</li><li>Text： 文本</li><li>SceneAigcVideo： 场景化视频处理</li><li>SceneAigcImage： 场景化图片处理</li><li>SceneAigcTime： 场景化处理次数</li></ul>
                     * @return AigcType <p>AIGC类型。</p><p>枚举值：</p><ul><li>Video： 视频</li><li>Image： 图片</li><li>Text： 文本</li><li>SceneAigcVideo： 场景化视频处理</li><li>SceneAigcImage： 场景化图片处理</li><li>SceneAigcTime： 场景化处理次数</li></ul>
                     * 
                     */
                    std::string GetAigcType() const;

                    /**
                     * 设置<p>AIGC类型。</p><p>枚举值：</p><ul><li>Video： 视频</li><li>Image： 图片</li><li>Text： 文本</li><li>SceneAigcVideo： 场景化视频处理</li><li>SceneAigcImage： 场景化图片处理</li><li>SceneAigcTime： 场景化处理次数</li></ul>
                     * @param _aigcType <p>AIGC类型。</p><p>枚举值：</p><ul><li>Video： 视频</li><li>Image： 图片</li><li>Text： 文本</li><li>SceneAigcVideo： 场景化视频处理</li><li>SceneAigcImage： 场景化图片处理</li><li>SceneAigcTime： 场景化处理次数</li></ul>
                     * 
                     */
                    void SetAigcType(const std::string& _aigcType);

                    /**
                     * 判断参数 AigcType 是否已赋值
                     * @return AigcType 是否已赋值
                     * 
                     */
                    bool AigcTypeHasBeenSet() const;

                    /**
                     * 获取<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * <p>起始日期。使用 <a href="https://cloud.tencent.com/document/product/266/11732#52">ISO 日期格式</a>。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束日期，需大于等于起始日期。使用 <a href="https://cloud.tencent.com/document/product/266/11732#52">ISO 日期格式</a>。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>AIGC类型。</p><p>枚举值：</p><ul><li>Video： 视频</li><li>Image： 图片</li><li>Text： 文本</li><li>SceneAigcVideo： 场景化视频处理</li><li>SceneAigcImage： 场景化图片处理</li><li>SceneAigcTime： 场景化处理次数</li></ul>
                     */
                    std::string m_aigcType;
                    bool m_aigcTypeHasBeenSet;

                    /**
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCUSAGEDATAREQUEST_H_
