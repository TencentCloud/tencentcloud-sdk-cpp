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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_TAGDATAINFO_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_TAGDATAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 标签信息
                */
                class TagDataInfo : public AbstractModel
                {
                public:
                    TagDataInfo();
                    ~TagDataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分账标签键
                     * @return TagKey 分账标签键
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置分账标签键
                     * @param _tagKey 分账标签键
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取标签类型，0普通标签，1分账标签
                     * @return Status 标签类型，0普通标签，1分账标签
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置标签类型，0普通标签，1分账标签
                     * @param _status 标签类型，0普通标签，1分账标签
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
                     * 获取设置分账标签时间，普通标签不返回
                     * @return UpdateTime 设置分账标签时间，普通标签不返回
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置设置分账标签时间，普通标签不返回
                     * @param _updateTime 设置分账标签时间，普通标签不返回
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
                     * 分账标签键
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * 标签类型，0普通标签，1分账标签
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 设置分账标签时间，普通标签不返回
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_TAGDATAINFO_H_
