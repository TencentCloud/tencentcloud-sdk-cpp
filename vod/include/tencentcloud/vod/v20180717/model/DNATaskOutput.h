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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DNATASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DNATASKOUTPUT_H_

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
                * DNA查重任务输出。
                */
                class DNATaskOutput : public AbstractModel
                {
                public:
                    DNATaskOutput();
                    ~DNATaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>命中的参考媒资 FileId。</p>
                     * @return RefFileId <p>命中的参考媒资 FileId。</p>
                     * 
                     */
                    std::string GetRefFileId() const;

                    /**
                     * 设置<p>命中的参考媒资 FileId。</p>
                     * @param _refFileId <p>命中的参考媒资 FileId。</p>
                     * 
                     */
                    void SetRefFileId(const std::string& _refFileId);

                    /**
                     * 判断参数 RefFileId 是否已赋值
                     * @return RefFileId 是否已赋值
                     * 
                     */
                    bool RefFileIdHasBeenSet() const;

                    /**
                     * 获取<p>查询媒资命中片段起始时间。</p><p>单位：秒</p>
                     * @return QueryStartSec <p>查询媒资命中片段起始时间。</p><p>单位：秒</p>
                     * 
                     */
                    double GetQueryStartSec() const;

                    /**
                     * 设置<p>查询媒资命中片段起始时间。</p><p>单位：秒</p>
                     * @param _queryStartSec <p>查询媒资命中片段起始时间。</p><p>单位：秒</p>
                     * 
                     */
                    void SetQueryStartSec(const double& _queryStartSec);

                    /**
                     * 判断参数 QueryStartSec 是否已赋值
                     * @return QueryStartSec 是否已赋值
                     * 
                     */
                    bool QueryStartSecHasBeenSet() const;

                    /**
                     * 获取<p>查询媒资命中片段结束时间。</p><p>单位：秒</p>
                     * @return QueryEndSec <p>查询媒资命中片段结束时间。</p><p>单位：秒</p>
                     * 
                     */
                    double GetQueryEndSec() const;

                    /**
                     * 设置<p>查询媒资命中片段结束时间。</p><p>单位：秒</p>
                     * @param _queryEndSec <p>查询媒资命中片段结束时间。</p><p>单位：秒</p>
                     * 
                     */
                    void SetQueryEndSec(const double& _queryEndSec);

                    /**
                     * 判断参数 QueryEndSec 是否已赋值
                     * @return QueryEndSec 是否已赋值
                     * 
                     */
                    bool QueryEndSecHasBeenSet() const;

                    /**
                     * 获取<p>参考媒资对应片段起始时间。</p><p>单位：秒</p>
                     * @return RefStartSec <p>参考媒资对应片段起始时间。</p><p>单位：秒</p>
                     * 
                     */
                    double GetRefStartSec() const;

                    /**
                     * 设置<p>参考媒资对应片段起始时间。</p><p>单位：秒</p>
                     * @param _refStartSec <p>参考媒资对应片段起始时间。</p><p>单位：秒</p>
                     * 
                     */
                    void SetRefStartSec(const double& _refStartSec);

                    /**
                     * 判断参数 RefStartSec 是否已赋值
                     * @return RefStartSec 是否已赋值
                     * 
                     */
                    bool RefStartSecHasBeenSet() const;

                    /**
                     * 获取<p>参考媒资对应片段结束时间。</p><p>单位：秒</p>
                     * @return RefEndSec <p>参考媒资对应片段结束时间。</p><p>单位：秒</p>
                     * 
                     */
                    double GetRefEndSec() const;

                    /**
                     * 设置<p>参考媒资对应片段结束时间。</p><p>单位：秒</p>
                     * @param _refEndSec <p>参考媒资对应片段结束时间。</p><p>单位：秒</p>
                     * 
                     */
                    void SetRefEndSec(const double& _refEndSec);

                    /**
                     * 判断参数 RefEndSec 是否已赋值
                     * @return RefEndSec 是否已赋值
                     * 
                     */
                    bool RefEndSecHasBeenSet() const;

                    /**
                     * 获取<p>匹配置信度。</p><p>取值范围：[0, 1]</p>
                     * @return Confidence <p>匹配置信度。</p><p>取值范围：[0, 1]</p>
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置<p>匹配置信度。</p><p>取值范围：[0, 1]</p>
                     * @param _confidence <p>匹配置信度。</p><p>取值范围：[0, 1]</p>
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取<p>变速比（1.0 表示原速，非 1 表示加速或者减速）。</p>
                     * @return SpeedRatio <p>变速比（1.0 表示原速，非 1 表示加速或者减速）。</p>
                     * 
                     */
                    double GetSpeedRatio() const;

                    /**
                     * 设置<p>变速比（1.0 表示原速，非 1 表示加速或者减速）。</p>
                     * @param _speedRatio <p>变速比（1.0 表示原速，非 1 表示加速或者减速）。</p>
                     * 
                     */
                    void SetSpeedRatio(const double& _speedRatio);

                    /**
                     * 判断参数 SpeedRatio 是否已赋值
                     * @return SpeedRatio 是否已赋值
                     * 
                     */
                    bool SpeedRatioHasBeenSet() const;

                private:

                    /**
                     * <p>命中的参考媒资 FileId。</p>
                     */
                    std::string m_refFileId;
                    bool m_refFileIdHasBeenSet;

                    /**
                     * <p>查询媒资命中片段起始时间。</p><p>单位：秒</p>
                     */
                    double m_queryStartSec;
                    bool m_queryStartSecHasBeenSet;

                    /**
                     * <p>查询媒资命中片段结束时间。</p><p>单位：秒</p>
                     */
                    double m_queryEndSec;
                    bool m_queryEndSecHasBeenSet;

                    /**
                     * <p>参考媒资对应片段起始时间。</p><p>单位：秒</p>
                     */
                    double m_refStartSec;
                    bool m_refStartSecHasBeenSet;

                    /**
                     * <p>参考媒资对应片段结束时间。</p><p>单位：秒</p>
                     */
                    double m_refEndSec;
                    bool m_refEndSecHasBeenSet;

                    /**
                     * <p>匹配置信度。</p><p>取值范围：[0, 1]</p>
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * <p>变速比（1.0 表示原速，非 1 表示加速或者减速）。</p>
                     */
                    double m_speedRatio;
                    bool m_speedRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DNATASKOUTPUT_H_
