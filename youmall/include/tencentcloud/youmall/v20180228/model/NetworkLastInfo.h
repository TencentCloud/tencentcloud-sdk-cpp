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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_NETWORKLASTINFO_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_NETWORKLASTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/youmall/v20180228/model/NetworkAndShopInfo.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 获取当前门店最新网络状态数据返回结构
                */
                class NetworkLastInfo : public AbstractModel
                {
                public:
                    NetworkLastInfo();
                    ~NetworkLastInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总数
                     * @return Count 总数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置总数
                     * @param _count 总数
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取网络状态
                     * @return Infos 网络状态
                     * 
                     */
                    std::vector<NetworkAndShopInfo> GetInfos() const;

                    /**
                     * 设置网络状态
                     * @param _infos 网络状态
                     * 
                     */
                    void SetInfos(const std::vector<NetworkAndShopInfo>& _infos);

                    /**
                     * 判断参数 Infos 是否已赋值
                     * @return Infos 是否已赋值
                     * 
                     */
                    bool InfosHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 网络状态
                     */
                    std::vector<NetworkAndShopInfo> m_infos;
                    bool m_infosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_NETWORKLASTINFO_H_
