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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_OLDVIP_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_OLDVIP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 用于返回实例存在的未回收的ip数量
                */
                class OldVip : public AbstractModel
                {
                public:
                    OldVip();
                    ~OldVip() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取未回收的旧ip
                     * @return Vip 未回收的旧ip
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置未回收的旧ip
                     * @param _vip 未回收的旧ip
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取ip回收时间
                     * @return RecycleTime ip回收时间
                     * 
                     */
                    std::string GetRecycleTime() const;

                    /**
                     * 设置ip回收时间
                     * @param _recycleTime ip回收时间
                     * 
                     */
                    void SetRecycleTime(const std::string& _recycleTime);

                    /**
                     * 判断参数 RecycleTime 是否已赋值
                     * @return RecycleTime 是否已赋值
                     * 
                     */
                    bool RecycleTimeHasBeenSet() const;

                    /**
                     * 获取旧IP保留时间小时数
                     * @return OldIpRetainTime 旧IP保留时间小时数
                     * 
                     */
                    int64_t GetOldIpRetainTime() const;

                    /**
                     * 设置旧IP保留时间小时数
                     * @param _oldIpRetainTime 旧IP保留时间小时数
                     * 
                     */
                    void SetOldIpRetainTime(const int64_t& _oldIpRetainTime);

                    /**
                     * 判断参数 OldIpRetainTime 是否已赋值
                     * @return OldIpRetainTime 是否已赋值
                     * 
                     */
                    bool OldIpRetainTimeHasBeenSet() const;

                private:

                    /**
                     * 未回收的旧ip
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * ip回收时间
                     */
                    std::string m_recycleTime;
                    bool m_recycleTimeHasBeenSet;

                    /**
                     * 旧IP保留时间小时数
                     */
                    int64_t m_oldIpRetainTime;
                    bool m_oldIpRetainTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_OLDVIP_H_
