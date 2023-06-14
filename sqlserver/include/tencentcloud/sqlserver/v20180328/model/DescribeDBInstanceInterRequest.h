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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCEINTERREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCEINTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeDBInstanceInter请求参数结构体
                */
                class DescribeDBInstanceInterRequest : public AbstractModel
                {
                public:
                    DescribeDBInstanceInterRequest();
                    ~DescribeDBInstanceInterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页，页大小，范围是1-100
                     * @return Limit 分页，页大小，范围是1-100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页，页大小，范围是1-100
                     * @param _limit 分页，页大小，范围是1-100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取按照实例ID筛选
                     * @return InstanceId 按照实例ID筛选
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置按照实例ID筛选
                     * @param _instanceId 按照实例ID筛选
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取按照状态筛选 1-互通IP打开中；2-互通IP已经打开；3-加入到互通组中；4-已加入到互通组；5-互通IP回收中；6-互通IP已回收；7-从互通组移除中；8-已从互通组中移除
                     * @return Status 按照状态筛选 1-互通IP打开中；2-互通IP已经打开；3-加入到互通组中；4-已加入到互通组；5-互通IP回收中；6-互通IP已回收；7-从互通组移除中；8-已从互通组中移除
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置按照状态筛选 1-互通IP打开中；2-互通IP已经打开；3-加入到互通组中；4-已加入到互通组；5-互通IP回收中；6-互通IP已回收；7-从互通组移除中；8-已从互通组中移除
                     * @param _status 按照状态筛选 1-互通IP打开中；2-互通IP已经打开；3-加入到互通组中；4-已加入到互通组；5-互通IP回收中；6-互通IP已回收；7-从互通组移除中；8-已从互通组中移除
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
                     * 获取实例版本代号列表
                     * @return VersionSet 实例版本代号列表
                     * 
                     */
                    std::vector<std::string> GetVersionSet() const;

                    /**
                     * 设置实例版本代号列表
                     * @param _versionSet 实例版本代号列表
                     * 
                     */
                    void SetVersionSet(const std::vector<std::string>& _versionSet);

                    /**
                     * 判断参数 VersionSet 是否已赋值
                     * @return VersionSet 是否已赋值
                     * 
                     */
                    bool VersionSetHasBeenSet() const;

                    /**
                     * 获取实例所在可用区，格式如：ap-guangzhou-2
                     * @return Zone 实例所在可用区，格式如：ap-guangzhou-2
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置实例所在可用区，格式如：ap-guangzhou-2
                     * @param _zone 实例所在可用区，格式如：ap-guangzhou-2
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取分页，页数，默认是0
                     * @return Offset 分页，页数，默认是0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页，页数，默认是0
                     * @param _offset 分页，页数，默认是0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 分页，页大小，范围是1-100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 按照实例ID筛选
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 按照状态筛选 1-互通IP打开中；2-互通IP已经打开；3-加入到互通组中；4-已加入到互通组；5-互通IP回收中；6-互通IP已回收；7-从互通组移除中；8-已从互通组中移除
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例版本代号列表
                     */
                    std::vector<std::string> m_versionSet;
                    bool m_versionSetHasBeenSet;

                    /**
                     * 实例所在可用区，格式如：ap-guangzhou-2
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 分页，页数，默认是0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCEINTERREQUEST_H_
