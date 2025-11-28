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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEUSAGEDATAREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEUSAGEDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeUsageData请求参数结构体
                */
                class DescribeUsageDataRequest : public AbstractModel
                {
                public:
                    DescribeUsageDataRequest();
                    ~DescribeUsageDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     * @return StartTime 起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     * @param _startTime 起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
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
                     * 获取结束日期，需大于等于起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     * @return EndTime 结束日期，需大于等于起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束日期，需大于等于起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     * @param _endTime 结束日期，需大于等于起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
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
                     * 获取查询媒体处理任务类型，默认查询转码。
<li>Transcode：转码</li>
<li>Enhance：增强</li>
<li>AIAnalysis：智能分析</li>
<li>AIRecognition：智能识别</li>
<li>AIReview：内容审核</li>
<li>Snapshot：截图</li>
<li>AnimatedGraphics：转动图</li>
<li>AiQualityControl：质检</li>
<li>Evaluation：视频评测</li>
<li>ImageProcess: 图片处理</li>
<li>AddBlindWatermark: 添加基础版权数字水印</li>
<li>AddNagraWatermark: 添加NAGRA数字水印</li>
<li>ExtractBlindWatermark: 提取基础版权数字水印</li>
                     * @return Types 查询媒体处理任务类型，默认查询转码。
<li>Transcode：转码</li>
<li>Enhance：增强</li>
<li>AIAnalysis：智能分析</li>
<li>AIRecognition：智能识别</li>
<li>AIReview：内容审核</li>
<li>Snapshot：截图</li>
<li>AnimatedGraphics：转动图</li>
<li>AiQualityControl：质检</li>
<li>Evaluation：视频评测</li>
<li>ImageProcess: 图片处理</li>
<li>AddBlindWatermark: 添加基础版权数字水印</li>
<li>AddNagraWatermark: 添加NAGRA数字水印</li>
<li>ExtractBlindWatermark: 提取基础版权数字水印</li>
                     * 
                     */
                    std::vector<std::string> GetTypes() const;

                    /**
                     * 设置查询媒体处理任务类型，默认查询转码。
<li>Transcode：转码</li>
<li>Enhance：增强</li>
<li>AIAnalysis：智能分析</li>
<li>AIRecognition：智能识别</li>
<li>AIReview：内容审核</li>
<li>Snapshot：截图</li>
<li>AnimatedGraphics：转动图</li>
<li>AiQualityControl：质检</li>
<li>Evaluation：视频评测</li>
<li>ImageProcess: 图片处理</li>
<li>AddBlindWatermark: 添加基础版权数字水印</li>
<li>AddNagraWatermark: 添加NAGRA数字水印</li>
<li>ExtractBlindWatermark: 提取基础版权数字水印</li>
                     * @param _types 查询媒体处理任务类型，默认查询转码。
<li>Transcode：转码</li>
<li>Enhance：增强</li>
<li>AIAnalysis：智能分析</li>
<li>AIRecognition：智能识别</li>
<li>AIReview：内容审核</li>
<li>Snapshot：截图</li>
<li>AnimatedGraphics：转动图</li>
<li>AiQualityControl：质检</li>
<li>Evaluation：视频评测</li>
<li>ImageProcess: 图片处理</li>
<li>AddBlindWatermark: 添加基础版权数字水印</li>
<li>AddNagraWatermark: 添加NAGRA数字水印</li>
<li>ExtractBlindWatermark: 提取基础版权数字水印</li>
                     * 
                     */
                    void SetTypes(const std::vector<std::string>& _types);

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     * 
                     */
                    bool TypesHasBeenSet() const;

                    /**
                     * 获取媒体处理园区，默认返回 ap-guangzhou 园区。
<li>ap-guangzhou：广州</li>
<li>ap-hongkong：中国香港</li>
<li>ap-taipei：中国台北</li>
<li>ap-singapore：新加坡</li>
<li>ap-mumbai：印度</li>
<li>ap-jakarta：雅加达</li>
<li>ap-seoul：首尔</li>
<li>ap-bangkok：泰国</li>
<li>ap-tokyo：日本</li>
<li>na-siliconvalley：美国硅谷</li>
<li>na-ashburn：弗吉尼亚</li>
<li>na-toronto：多伦多</li>
<li>sa-saopaulo：圣保罗</li>
<li>eu-frankfurt：法兰克福</li>
<li>eu-moscow：俄罗斯</li>
<li>aws：AWS</li>
                     * @return ProcessRegions 媒体处理园区，默认返回 ap-guangzhou 园区。
<li>ap-guangzhou：广州</li>
<li>ap-hongkong：中国香港</li>
<li>ap-taipei：中国台北</li>
<li>ap-singapore：新加坡</li>
<li>ap-mumbai：印度</li>
<li>ap-jakarta：雅加达</li>
<li>ap-seoul：首尔</li>
<li>ap-bangkok：泰国</li>
<li>ap-tokyo：日本</li>
<li>na-siliconvalley：美国硅谷</li>
<li>na-ashburn：弗吉尼亚</li>
<li>na-toronto：多伦多</li>
<li>sa-saopaulo：圣保罗</li>
<li>eu-frankfurt：法兰克福</li>
<li>eu-moscow：俄罗斯</li>
<li>aws：AWS</li>
                     * 
                     */
                    std::vector<std::string> GetProcessRegions() const;

                    /**
                     * 设置媒体处理园区，默认返回 ap-guangzhou 园区。
<li>ap-guangzhou：广州</li>
<li>ap-hongkong：中国香港</li>
<li>ap-taipei：中国台北</li>
<li>ap-singapore：新加坡</li>
<li>ap-mumbai：印度</li>
<li>ap-jakarta：雅加达</li>
<li>ap-seoul：首尔</li>
<li>ap-bangkok：泰国</li>
<li>ap-tokyo：日本</li>
<li>na-siliconvalley：美国硅谷</li>
<li>na-ashburn：弗吉尼亚</li>
<li>na-toronto：多伦多</li>
<li>sa-saopaulo：圣保罗</li>
<li>eu-frankfurt：法兰克福</li>
<li>eu-moscow：俄罗斯</li>
<li>aws：AWS</li>
                     * @param _processRegions 媒体处理园区，默认返回 ap-guangzhou 园区。
<li>ap-guangzhou：广州</li>
<li>ap-hongkong：中国香港</li>
<li>ap-taipei：中国台北</li>
<li>ap-singapore：新加坡</li>
<li>ap-mumbai：印度</li>
<li>ap-jakarta：雅加达</li>
<li>ap-seoul：首尔</li>
<li>ap-bangkok：泰国</li>
<li>ap-tokyo：日本</li>
<li>na-siliconvalley：美国硅谷</li>
<li>na-ashburn：弗吉尼亚</li>
<li>na-toronto：多伦多</li>
<li>sa-saopaulo：圣保罗</li>
<li>eu-frankfurt：法兰克福</li>
<li>eu-moscow：俄罗斯</li>
<li>aws：AWS</li>
                     * 
                     */
                    void SetProcessRegions(const std::vector<std::string>& _processRegions);

                    /**
                     * 判断参数 ProcessRegions 是否已赋值
                     * @return ProcessRegions 是否已赋值
                     * 
                     */
                    bool ProcessRegionsHasBeenSet() const;

                private:

                    /**
                     * 起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束日期，需大于等于起始日期。使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 查询媒体处理任务类型，默认查询转码。
<li>Transcode：转码</li>
<li>Enhance：增强</li>
<li>AIAnalysis：智能分析</li>
<li>AIRecognition：智能识别</li>
<li>AIReview：内容审核</li>
<li>Snapshot：截图</li>
<li>AnimatedGraphics：转动图</li>
<li>AiQualityControl：质检</li>
<li>Evaluation：视频评测</li>
<li>ImageProcess: 图片处理</li>
<li>AddBlindWatermark: 添加基础版权数字水印</li>
<li>AddNagraWatermark: 添加NAGRA数字水印</li>
<li>ExtractBlindWatermark: 提取基础版权数字水印</li>
                     */
                    std::vector<std::string> m_types;
                    bool m_typesHasBeenSet;

                    /**
                     * 媒体处理园区，默认返回 ap-guangzhou 园区。
<li>ap-guangzhou：广州</li>
<li>ap-hongkong：中国香港</li>
<li>ap-taipei：中国台北</li>
<li>ap-singapore：新加坡</li>
<li>ap-mumbai：印度</li>
<li>ap-jakarta：雅加达</li>
<li>ap-seoul：首尔</li>
<li>ap-bangkok：泰国</li>
<li>ap-tokyo：日本</li>
<li>na-siliconvalley：美国硅谷</li>
<li>na-ashburn：弗吉尼亚</li>
<li>na-toronto：多伦多</li>
<li>sa-saopaulo：圣保罗</li>
<li>eu-frankfurt：法兰克福</li>
<li>eu-moscow：俄罗斯</li>
<li>aws：AWS</li>
                     */
                    std::vector<std::string> m_processRegions;
                    bool m_processRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEUSAGEDATAREQUEST_H_
