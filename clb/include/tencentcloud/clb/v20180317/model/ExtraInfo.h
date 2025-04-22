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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_EXTRAINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_EXTRAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 暂做保留，一般用户无需关注。
                */
                class ExtraInfo : public AbstractModel
                {
                public:
                    ExtraInfo();
                    ~ExtraInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开通VIP直通
                     * @return ZhiTong 是否开通VIP直通
                     * 
                     */
                    bool GetZhiTong() const;

                    /**
                     * 设置是否开通VIP直通
                     * @param _zhiTong 是否开通VIP直通
                     * 
                     */
                    void SetZhiTong(const bool& _zhiTong);

                    /**
                     * 判断参数 ZhiTong 是否已赋值
                     * @return ZhiTong 是否已赋值
                     * 
                     */
                    bool ZhiTongHasBeenSet() const;

                    /**
                     * 获取TgwGroup名称
                     * @return TgwGroupName TgwGroup名称
                     * 
                     */
                    std::string GetTgwGroupName() const;

                    /**
                     * 设置TgwGroup名称
                     * @param _tgwGroupName TgwGroup名称
                     * 
                     */
                    void SetTgwGroupName(const std::string& _tgwGroupName);

                    /**
                     * 判断参数 TgwGroupName 是否已赋值
                     * @return TgwGroupName 是否已赋值
                     * 
                     */
                    bool TgwGroupNameHasBeenSet() const;

                private:

                    /**
                     * 是否开通VIP直通
                     */
                    bool m_zhiTong;
                    bool m_zhiTongHasBeenSet;

                    /**
                     * TgwGroup名称
                     */
                    std::string m_tgwGroupName;
                    bool m_tgwGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_EXTRAINFO_H_
