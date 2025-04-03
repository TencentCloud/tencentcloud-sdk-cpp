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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_ZOOKEEPERREGIONMYIDINFO_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_ZOOKEEPERREGIONMYIDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Zookeeper的地域信息的 myid 信息记录
                */
                class ZookeeperRegionMyIdInfo : public AbstractModel
                {
                public:
                    ZookeeperRegionMyIdInfo();
                    ~ZookeeperRegionMyIdInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域信息
                     * @return Region 地域信息
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域信息
                     * @param _region 地域信息
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取myid 的起始号段
                     * @return MyIdStart myid 的起始号段
                     * 
                     */
                    int64_t GetMyIdStart() const;

                    /**
                     * 设置myid 的起始号段
                     * @param _myIdStart myid 的起始号段
                     * 
                     */
                    void SetMyIdStart(const int64_t& _myIdStart);

                    /**
                     * 判断参数 MyIdStart 是否已赋值
                     * @return MyIdStart 是否已赋值
                     * 
                     */
                    bool MyIdStartHasBeenSet() const;

                    /**
                     * 获取myid 的结束号段
                     * @return MyIdEnd myid 的结束号段
                     * 
                     */
                    int64_t GetMyIdEnd() const;

                    /**
                     * 设置myid 的结束号段
                     * @param _myIdEnd myid 的结束号段
                     * 
                     */
                    void SetMyIdEnd(const int64_t& _myIdEnd);

                    /**
                     * 判断参数 MyIdEnd 是否已赋值
                     * @return MyIdEnd 是否已赋值
                     * 
                     */
                    bool MyIdEndHasBeenSet() const;

                private:

                    /**
                     * 地域信息
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * myid 的起始号段
                     */
                    int64_t m_myIdStart;
                    bool m_myIdStartHasBeenSet;

                    /**
                     * myid 的结束号段
                     */
                    int64_t m_myIdEnd;
                    bool m_myIdEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_ZOOKEEPERREGIONMYIDINFO_H_
