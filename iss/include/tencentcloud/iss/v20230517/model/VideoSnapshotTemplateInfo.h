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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_VIDEOSNAPSHOTTEMPLATEINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_VIDEOSNAPSHOTTEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/MultiVideoSnapshotMode.h>
#include <tencentcloud/iss/v20230517/model/EffectiveTime.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 截图模板信息
                */
                class VideoSnapshotTemplateInfo : public AbstractModel
                {
                public:
                    VideoSnapshotTemplateInfo();
                    ~VideoSnapshotTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>截图模板Id</p>
                     * @return TemplateId <p>截图模板Id</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>截图模板Id</p>
                     * @param _templateId <p>截图模板Id</p>
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>截图模板名称</p>
                     * @return Name <p>截图模板名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>截图模板名称</p>
                     * @param _name <p>截图模板名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>截图类型</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     * @return Type <p>截图类型</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>截图类型</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     * @param _type <p>截图类型</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>截帧频率</p>
                     * @return Interval <p>截帧频率</p>
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置<p>截帧频率</p>
                     * @param _interval <p>截帧频率</p>
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取<p>多张模式</p>
                     * @return MultiMode <p>多张模式</p>
                     * 
                     */
                    MultiVideoSnapshotMode GetMultiMode() const;

                    /**
                     * 设置<p>多张模式</p>
                     * @param _multiMode <p>多张模式</p>
                     * 
                     */
                    void SetMultiMode(const MultiVideoSnapshotMode& _multiMode);

                    /**
                     * 判断参数 MultiMode 是否已赋值
                     * @return MultiMode 是否已赋值
                     * 
                     */
                    bool MultiModeHasBeenSet() const;

                    /**
                     * 获取<p>生效时段</p>
                     * @return Times <p>生效时段</p>
                     * 
                     */
                    std::vector<EffectiveTime> GetTimes() const;

                    /**
                     * 设置<p>生效时段</p>
                     * @param _times <p>生效时段</p>
                     * 
                     */
                    void SetTimes(const std::vector<EffectiveTime>& _times);

                    /**
                     * 判断参数 Times 是否已赋值
                     * @return Times 是否已赋值
                     * 
                     */
                    bool TimesHasBeenSet() const;

                    /**
                     * 获取<p>模板关联的配置数</p>
                     * @return RelatedConfigCount <p>模板关联的配置数</p>
                     * 
                     */
                    int64_t GetRelatedConfigCount() const;

                    /**
                     * 设置<p>模板关联的配置数</p>
                     * @param _relatedConfigCount <p>模板关联的配置数</p>
                     * 
                     */
                    void SetRelatedConfigCount(const int64_t& _relatedConfigCount);

                    /**
                     * 判断参数 RelatedConfigCount 是否已赋值
                     * @return RelatedConfigCount 是否已赋值
                     * 
                     */
                    bool RelatedConfigCountHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>最近一次更新时间</p>
                     * @return UpdateTime <p>最近一次更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>最近一次更新时间</p>
                     * @param _updateTime <p>最近一次更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>截图模板Id</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>截图模板名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>截图类型</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>截帧频率</p>
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>多张模式</p>
                     */
                    MultiVideoSnapshotMode m_multiMode;
                    bool m_multiModeHasBeenSet;

                    /**
                     * <p>生效时段</p>
                     */
                    std::vector<EffectiveTime> m_times;
                    bool m_timesHasBeenSet;

                    /**
                     * <p>模板关联的配置数</p>
                     */
                    int64_t m_relatedConfigCount;
                    bool m_relatedConfigCountHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>最近一次更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_VIDEOSNAPSHOTTEMPLATEINFO_H_
