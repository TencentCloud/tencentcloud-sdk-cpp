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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDTOPICINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDTOPICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 仪表盘关联的topic信息
                */
                class DashboardTopicInfo : public AbstractModel
                {
                public:
                    DashboardTopicInfo();
                    ~DashboardTopicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主题id
                     * @return TopicId 主题id
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置主题id
                     * @param _topicId 主题id
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取topic所在的地域。
- 1:广州
- 4:上海
- 5:中国香港
- 7:上海金融
- 8:北京
- 9:新加坡
- 11:深圳金融
- 15:硅谷
- 16:成都
- 17:法兰克福
- 18:首尔
- 19:重庆
- 22:弗吉尼亚
- 23:曼谷
- 25:东京
- 33:南京
- 36:天津
- 39:台北
- 46:北京金融
- 72:雅加达
- 74:圣保罗
- 78:上海自动驾驶云
                     * @return Region topic所在的地域。
- 1:广州
- 4:上海
- 5:中国香港
- 7:上海金融
- 8:北京
- 9:新加坡
- 11:深圳金融
- 15:硅谷
- 16:成都
- 17:法兰克福
- 18:首尔
- 19:重庆
- 22:弗吉尼亚
- 23:曼谷
- 25:东京
- 33:南京
- 36:天津
- 39:台北
- 46:北京金融
- 72:雅加达
- 74:圣保罗
- 78:上海自动驾驶云
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置topic所在的地域。
- 1:广州
- 4:上海
- 5:中国香港
- 7:上海金融
- 8:北京
- 9:新加坡
- 11:深圳金融
- 15:硅谷
- 16:成都
- 17:法兰克福
- 18:首尔
- 19:重庆
- 22:弗吉尼亚
- 23:曼谷
- 25:东京
- 33:南京
- 36:天津
- 39:台北
- 46:北京金融
- 72:雅加达
- 74:圣保罗
- 78:上海自动驾驶云
                     * @param _region topic所在的地域。
- 1:广州
- 4:上海
- 5:中国香港
- 7:上海金融
- 8:北京
- 9:新加坡
- 11:深圳金融
- 15:硅谷
- 16:成都
- 17:法兰克福
- 18:首尔
- 19:重庆
- 22:弗吉尼亚
- 23:曼谷
- 25:东京
- 33:南京
- 36:天津
- 39:台北
- 46:北京金融
- 72:雅加达
- 74:圣保罗
- 78:上海自动驾驶云
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * 主题id
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * topic所在的地域。
- 1:广州
- 4:上海
- 5:中国香港
- 7:上海金融
- 8:北京
- 9:新加坡
- 11:深圳金融
- 15:硅谷
- 16:成都
- 17:法兰克福
- 18:首尔
- 19:重庆
- 22:弗吉尼亚
- 23:曼谷
- 25:东京
- 33:南京
- 36:天津
- 39:台北
- 46:北京金融
- 72:雅加达
- 74:圣保罗
- 78:上海自动驾驶云
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DASHBOARDTOPICINFO_H_
