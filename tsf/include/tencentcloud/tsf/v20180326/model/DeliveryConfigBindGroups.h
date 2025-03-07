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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DELIVERYCONFIGBINDGROUPS_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DELIVERYCONFIGBINDGROUPS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/DeliveryConfigBindGroup.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 描述配置项绑定的部署组
                */
                class DeliveryConfigBindGroups : public AbstractModel
                {
                public:
                    DeliveryConfigBindGroups();
                    ~DeliveryConfigBindGroups() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公共条数
                     * @return TotalCount 公共条数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置公共条数
                     * @param _totalCount 公共条数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取内容
                     * @return Content 内容
                     * 
                     */
                    std::vector<DeliveryConfigBindGroup> GetContent() const;

                    /**
                     * 设置内容
                     * @param _content 内容
                     * 
                     */
                    void SetContent(const std::vector<DeliveryConfigBindGroup>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 公共条数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 内容
                     */
                    std::vector<DeliveryConfigBindGroup> m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DELIVERYCONFIGBINDGROUPS_H_
