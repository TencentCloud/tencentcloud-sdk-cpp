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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEPROFILEFIELDSRSPDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEPROFILEFIELDSRSPDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/ProfileFieldItem.h>
#include <tencentcloud/ioa/v20220601/model/ProfileTips.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 描述字段数据
                */
                class DescribeProfileFieldsRspData : public AbstractModel
                {
                public:
                    DescribeProfileFieldsRspData();
                    ~DescribeProfileFieldsRspData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>详情item</p>
                     * @return Item <p>详情item</p>
                     * 
                     */
                    std::vector<ProfileFieldItem> GetItem() const;

                    /**
                     * 设置<p>详情item</p>
                     * @param _item <p>详情item</p>
                     * 
                     */
                    void SetItem(const std::vector<ProfileFieldItem>& _item);

                    /**
                     * 判断参数 Item 是否已赋值
                     * @return Item 是否已赋值
                     * 
                     */
                    bool ItemHasBeenSet() const;

                    /**
                     * 获取<p>profile开关配置</p>
                     * @return ProfileTips <p>profile开关配置</p>
                     * 
                     */
                    ProfileTips GetProfileTips() const;

                    /**
                     * 设置<p>profile开关配置</p>
                     * @param _profileTips <p>profile开关配置</p>
                     * 
                     */
                    void SetProfileTips(const ProfileTips& _profileTips);

                    /**
                     * 判断参数 ProfileTips 是否已赋值
                     * @return ProfileTips 是否已赋值
                     * 
                     */
                    bool ProfileTipsHasBeenSet() const;

                private:

                    /**
                     * <p>详情item</p>
                     */
                    std::vector<ProfileFieldItem> m_item;
                    bool m_itemHasBeenSet;

                    /**
                     * <p>profile开关配置</p>
                     */
                    ProfileTips m_profileTips;
                    bool m_profileTipsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEPROFILEFIELDSRSPDATA_H_
