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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYPULLSTREAMCONFIGREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYPULLSTREAMCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * ModifyPullStreamConfig请求参数结构体
                */
                class ModifyPullStreamConfigRequest : public AbstractModel
                {
                public:
                    ModifyPullStreamConfigRequest();
                    ~ModifyPullStreamConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置id。
                     * @return ConfigId 配置id。
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置配置id。
                     * @param ConfigId 配置id。
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取源Url。
                     * @return FromUrl 源Url。
                     */
                    std::string GetFromUrl() const;

                    /**
                     * 设置源Url。
                     * @param FromUrl 源Url。
                     */
                    void SetFromUrl(const std::string& _fromUrl);

                    /**
                     * 判断参数 FromUrl 是否已赋值
                     * @return FromUrl 是否已赋值
                     */
                    bool FromUrlHasBeenSet() const;

                    /**
                     * 获取目的Url。
                     * @return ToUrl 目的Url。
                     */
                    std::string GetToUrl() const;

                    /**
                     * 设置目的Url。
                     * @param ToUrl 目的Url。
                     */
                    void SetToUrl(const std::string& _toUrl);

                    /**
                     * 判断参数 ToUrl 是否已赋值
                     * @return ToUrl 是否已赋值
                     */
                    bool ToUrlHasBeenSet() const;

                    /**
                     * 获取区域id,1-深圳,2-上海，3-天津,4-香港。如有改动，需同时传入IspId。
                     * @return AreaId 区域id,1-深圳,2-上海，3-天津,4-香港。如有改动，需同时传入IspId。
                     */
                    int64_t GetAreaId() const;

                    /**
                     * 设置区域id,1-深圳,2-上海，3-天津,4-香港。如有改动，需同时传入IspId。
                     * @param AreaId 区域id,1-深圳,2-上海，3-天津,4-香港。如有改动，需同时传入IspId。
                     */
                    void SetAreaId(const int64_t& _areaId);

                    /**
                     * 判断参数 AreaId 是否已赋值
                     * @return AreaId 是否已赋值
                     */
                    bool AreaIdHasBeenSet() const;

                    /**
                     * 获取运营商id,1-电信,2-移动,3-联通,4-其他,AreaId为4的时候,IspId只能为其他。如有改动，需同时传入AreaId。
                     * @return IspId 运营商id,1-电信,2-移动,3-联通,4-其他,AreaId为4的时候,IspId只能为其他。如有改动，需同时传入AreaId。
                     */
                    int64_t GetIspId() const;

                    /**
                     * 设置运营商id,1-电信,2-移动,3-联通,4-其他,AreaId为4的时候,IspId只能为其他。如有改动，需同时传入AreaId。
                     * @param IspId 运营商id,1-电信,2-移动,3-联通,4-其他,AreaId为4的时候,IspId只能为其他。如有改动，需同时传入AreaId。
                     */
                    void SetIspId(const int64_t& _ispId);

                    /**
                     * 判断参数 IspId 是否已赋值
                     * @return IspId 是否已赋值
                     */
                    bool IspIdHasBeenSet() const;

                    /**
                     * 获取开始时间。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
                     * @return StartTime 开始时间。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
                     * @param StartTime 开始时间。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间，注意：
1. 结束时间必须大于开始时间；
2. 结束时间和开始时间必须大于当前时间；
3. 结束时间 和 开始时间 间隔必须小于七天。

使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
                     * @return EndTime 结束时间，注意：
1. 结束时间必须大于开始时间；
2. 结束时间和开始时间必须大于当前时间；
3. 结束时间 和 开始时间 间隔必须小于七天。

使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，注意：
1. 结束时间必须大于开始时间；
2. 结束时间和开始时间必须大于当前时间；
3. 结束时间 和 开始时间 间隔必须小于七天。

使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
                     * @param EndTime 结束时间，注意：
1. 结束时间必须大于开始时间；
2. 结束时间和开始时间必须大于当前时间；
3. 结束时间 和 开始时间 间隔必须小于七天。

使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 配置id。
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 源Url。
                     */
                    std::string m_fromUrl;
                    bool m_fromUrlHasBeenSet;

                    /**
                     * 目的Url。
                     */
                    std::string m_toUrl;
                    bool m_toUrlHasBeenSet;

                    /**
                     * 区域id,1-深圳,2-上海，3-天津,4-香港。如有改动，需同时传入IspId。
                     */
                    int64_t m_areaId;
                    bool m_areaIdHasBeenSet;

                    /**
                     * 运营商id,1-电信,2-移动,3-联通,4-其他,AreaId为4的时候,IspId只能为其他。如有改动，需同时传入AreaId。
                     */
                    int64_t m_ispId;
                    bool m_ispIdHasBeenSet;

                    /**
                     * 开始时间。
使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，注意：
1. 结束时间必须大于开始时间；
2. 结束时间和开始时间必须大于当前时间；
3. 结束时间 和 开始时间 间隔必须小于七天。

使用UTC格式时间，
例如：2019-01-08T10:00:00Z。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYPULLSTREAMCONFIGREQUEST_H_
