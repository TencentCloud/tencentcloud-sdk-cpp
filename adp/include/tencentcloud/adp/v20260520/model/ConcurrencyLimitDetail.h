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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONCURRENCYLIMITDETAIL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONCURRENCYLIMITDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/CallSource.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 并发超限明细
                */
                class ConcurrencyLimitDetail : public AbstractModel
                {
                public:
                    ConcurrencyLimitDetail();
                    ~ConcurrencyLimitDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>调用来源（subject_type 决定 subject_id/subject_name 的含义，如 APP 时 subject_id=app_id、subject_name=app_name）</p>
                     * @return CallSource <p>调用来源（subject_type 决定 subject_id/subject_name 的含义，如 APP 时 subject_id=app_id、subject_name=app_name）</p>
                     * 
                     */
                    CallSource GetCallSource() const;

                    /**
                     * 设置<p>调用来源（subject_type 决定 subject_id/subject_name 的含义，如 APP 时 subject_id=app_id、subject_name=app_name）</p>
                     * @param _callSource <p>调用来源（subject_type 决定 subject_id/subject_name 的含义，如 APP 时 subject_id=app_id、subject_name=app_name）</p>
                     * 
                     */
                    void SetCallSource(const CallSource& _callSource);

                    /**
                     * 判断参数 CallSource 是否已赋值
                     * @return CallSource 是否已赋值
                     * 
                     */
                    bool CallSourceHasBeenSet() const;

                    /**
                     * 获取<p>超限发生时间（Unix秒）</p>
                     * @return EventTime <p>超限发生时间（Unix秒）</p>
                     * 
                     */
                    std::string GetEventTime() const;

                    /**
                     * 设置<p>超限发生时间（Unix秒）</p>
                     * @param _eventTime <p>超限发生时间（Unix秒）</p>
                     * 
                     */
                    void SetEventTime(const std::string& _eventTime);

                    /**
                     * 判断参数 EventTime 是否已赋值
                     * @return EventTime 是否已赋值
                     * 
                     */
                    bool EventTimeHasBeenSet() const;

                    /**
                     * 获取<p>模型名称</p>
                     * @return ModelName <p>模型名称</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>模型名称</p>
                     * @param _modelName <p>模型名称</p>
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取<p>请求内容（用户请求的原始查询文本）</p>
                     * @return RequestQuery <p>请求内容（用户请求的原始查询文本）</p>
                     * 
                     */
                    std::string GetRequestQuery() const;

                    /**
                     * 设置<p>请求内容（用户请求的原始查询文本）</p>
                     * @param _requestQuery <p>请求内容（用户请求的原始查询文本）</p>
                     * 
                     */
                    void SetRequestQuery(const std::string& _requestQuery);

                    /**
                     * 判断参数 RequestQuery 是否已赋值
                     * @return RequestQuery 是否已赋值
                     * 
                     */
                    bool RequestQueryHasBeenSet() const;

                    /**
                     * 获取<p>空间 ID</p>
                     * @return SpaceId <p>空间 ID</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>空间 ID</p>
                     * @param _spaceId <p>空间 ID</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                private:

                    /**
                     * <p>调用来源（subject_type 决定 subject_id/subject_name 的含义，如 APP 时 subject_id=app_id、subject_name=app_name）</p>
                     */
                    CallSource m_callSource;
                    bool m_callSourceHasBeenSet;

                    /**
                     * <p>超限发生时间（Unix秒）</p>
                     */
                    std::string m_eventTime;
                    bool m_eventTimeHasBeenSet;

                    /**
                     * <p>模型名称</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>请求内容（用户请求的原始查询文本）</p>
                     */
                    std::string m_requestQuery;
                    bool m_requestQueryHasBeenSet;

                    /**
                     * <p>空间 ID</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONCURRENCYLIMITDETAIL_H_
