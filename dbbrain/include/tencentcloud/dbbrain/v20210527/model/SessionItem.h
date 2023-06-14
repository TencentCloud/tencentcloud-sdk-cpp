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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SESSIONITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SESSIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 实时会话访问来源详情。
                */
                class SessionItem : public AbstractModel
                {
                public:
                    SessionItem();
                    ~SessionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问来源。
                     * @return Ip 访问来源。
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置访问来源。
                     * @param _ip 访问来源。
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取当前访问来源活跃连接数
                     * @return ActiveConn 当前访问来源活跃连接数
                     * 
                     */
                    std::string GetActiveConn() const;

                    /**
                     * 设置当前访问来源活跃连接数
                     * @param _activeConn 当前访问来源活跃连接数
                     * 
                     */
                    void SetActiveConn(const std::string& _activeConn);

                    /**
                     * 判断参数 ActiveConn 是否已赋值
                     * @return ActiveConn 是否已赋值
                     * 
                     */
                    bool ActiveConnHasBeenSet() const;

                    /**
                     * 获取当前访问来源总连接数
                     * @return AllConn 当前访问来源总连接数
                     * 
                     */
                    int64_t GetAllConn() const;

                    /**
                     * 设置当前访问来源总连接数
                     * @param _allConn 当前访问来源总连接数
                     * 
                     */
                    void SetAllConn(const int64_t& _allConn);

                    /**
                     * 判断参数 AllConn 是否已赋值
                     * @return AllConn 是否已赋值
                     * 
                     */
                    bool AllConnHasBeenSet() const;

                private:

                    /**
                     * 访问来源。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 当前访问来源活跃连接数
                     */
                    std::string m_activeConn;
                    bool m_activeConnHasBeenSet;

                    /**
                     * 当前访问来源总连接数
                     */
                    int64_t m_allConn;
                    bool m_allConnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SESSIONITEM_H_
