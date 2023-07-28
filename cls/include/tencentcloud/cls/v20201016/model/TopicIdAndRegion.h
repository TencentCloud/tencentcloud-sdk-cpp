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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_TOPICIDANDREGION_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_TOPICIDANDREGION_H_

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
                * 仪表盘 topic与地域信息
                */
                class TopicIdAndRegion : public AbstractModel
                {
                public:
                    TopicIdAndRegion();
                    ~TopicIdAndRegion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志主题id
                     * @return TopicId 日志主题id
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题id
                     * @param _topicId 日志主题id
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
                     * 获取日志主题id 所在的地域id
地域ID - 访问链接查看详情：https://iwiki.woa.com/pages/viewpage.action?pageId=780556968#id-地域码表-一.region大区（标准地域）
                     * @return RegionId 日志主题id 所在的地域id
地域ID - 访问链接查看详情：https://iwiki.woa.com/pages/viewpage.action?pageId=780556968#id-地域码表-一.region大区（标准地域）
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置日志主题id 所在的地域id
地域ID - 访问链接查看详情：https://iwiki.woa.com/pages/viewpage.action?pageId=780556968#id-地域码表-一.region大区（标准地域）
                     * @param _regionId 日志主题id 所在的地域id
地域ID - 访问链接查看详情：https://iwiki.woa.com/pages/viewpage.action?pageId=780556968#id-地域码表-一.region大区（标准地域）
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                private:

                    /**
                     * 日志主题id
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 日志主题id 所在的地域id
地域ID - 访问链接查看详情：https://iwiki.woa.com/pages/viewpage.action?pageId=780556968#id-地域码表-一.region大区（标准地域）
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_TOPICIDANDREGION_H_
